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

void add_element_to_list(struct list* list, void* element)
{

}