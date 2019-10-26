#ifndef _LIST_H_

#define _LIST_H_

struct link_node
{
	struct link_node* next;
};

struct list
{
	struct link_node* head;
	int length;
};

//初始化链表
void init_list(struct list* list);

//添加元素到列表中
void add_element_to_list(struct list* list, void* element);

#endif // !_LIST_H_
