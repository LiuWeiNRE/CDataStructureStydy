#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "array.h"
#include "list.h"

void array_operate()
{
	struct array int_array;
	init_array(&int_array, sizeof(int));

	for (int i = 0; i < 10; i++)
	{
		add_element(&int_array, &i);
	}
	printf("int_array.length = %d\n", int_array.length);

	for (int i = 0; i < int_array.length; i++)
	{
		int* result = get_element(&int_array, i);
		printf("int_array[%d] = %d\n", i, *result);
	}

	clear_array(&int_array);
	printf("int_array.length = %d\n", int_array.length);

	for (int i = 0; i < 10; i++)
	{
		add_element(&int_array, &i);
	}
	printf("int_array.length = %d\n", int_array.length);

	remove_element(&int_array, 5);
	for (int i = 0; i < int_array.length; i++)
	{
		int* result = get_element(&int_array, i);
		printf("int_array[%d] = %d\n", i, *result);
	}

	int temp = 50;
	int* element = update_element(&int_array, 5, &temp);
	for (int i = 0; i < int_array.length; i++)
	{
		int* result = get_element(&int_array, i);
		printf("int_array[%d] = %d\n", i, *result);
	}


	clear_all_elements(&int_array);
	printf("int_array.length = %d\n", int_array.length);
}

struct list_element
{
	int index;
	struct link_node link;
};

struct list_element* malloc_element(int index)
{
	struct list_element* element = malloc(sizeof(struct list_element));
	memset(element, 0, sizeof(struct list_element));
	element->index = index;
	return element;
}

void list_operate()
{
	struct list test_list;
	init_list(&test_list);

	for (int i = 0; i < 9; i++)
	{
		add_element_to_list(&test_list, malloc_element(i));
	}
}

int main(int argc, char* argv)
{
	array_operate();

	printf("========================================================\n");

	list_operate();

	system("pause");
	return 0;
}