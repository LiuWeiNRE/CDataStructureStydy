#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "array.h"

#define ADD_ELEMENT_COUNT 64;

void init_array(struct array* array, int element_size)
{
	memset(array, 0, sizeof(struct array));
	array->max_count = ADD_ELEMENT_COUNT;
	array->memory = malloc(array->max_count*element_size);
	array->element_size = element_size;
	array->length = 0;
	memset(array->memory, 0, array->max_count*array->element_size);
	printf("array init succeed!\n");
}

void add_element(struct array* array, void* element)
{
	if (array->length >= array->max_count)
	{
		array->max_count += ADD_ELEMENT_COUNT;
		if (array->memory)
		{
			init_array(array, array->element_size);
		}
		else
		{
			array->memory = realloc(array->memory, array->max_count*array->element_size);
		}
	}
	memcpy(array->memory + array->length*array->element_size, element, array->element_size);
	array->length++;
	printf("array add element succeed!\n");
}

void remove_element(struct array* array, int index)
{
	if (index < 0 || index >= array->length)
	{
		return;
	}
	memset(array->memory + index * array->element_size, 0, array->element_size);
	printf("array remove element succeed!\n");
}

void* update_element(struct array* array, int index, const void* element)
{
	if (index < 0 || index >= array->length)
	{
		return NULL;
	}
	memcpy(array->memory + index * array->element_size, element, array->element_size);
	printf("array update element succeed!\n");
	return array->memory + index * array->element_size;
}

void* get_element(struct array* array, int index)
{
	if (index < 0 || index >= array->length)
	{
		return NULL;
	}
	printf("array get element succeed!\n");
	return array->memory + array->element_size*index;
}

void clear_array(struct array* array)
{
	free(array->memory);
	array->length = 0;
	array->max_count = 0;
	printf("array clear succeed!\n");
}

void clear_all_elements(struct array* array)
{
	array->length = 0;
	printf("array clear all elements succeed!\n");
}