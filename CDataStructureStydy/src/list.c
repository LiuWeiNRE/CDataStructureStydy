#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "list.h"

void init_list(struct list* list)
{
	memset(list, 0, sizeof(struct list));
	list->head = NULL;
	list->length = 0;
	printf("list init succeed!\n");
}

void add_element_to_list(struct list* list, struct link_node* link)
{
	struct link_node** temp = &(list->head);
	if (*temp)
	{
		while ((*temp)->next)
		{
			temp = &((*temp)->next);
		}
		(*temp)->next = link;
	}
	else
	{
		*temp = link;
	}
	list->length++;
}