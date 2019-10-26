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

//��ʼ������
void init_list(struct list* list);

//���Ԫ�ص��б���
void add_element_to_list(struct list* list, void* element);

#endif // !_LIST_H_
