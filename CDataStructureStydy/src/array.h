#ifndef _ARRAY_H_

#define _ARRAY_H_

struct array
{
	char* memory;//�����ڴ��ַ
	int max_count;//������󳤶�
	int length;//���鵱ǰ����
	int element_size;//����Ԫ�ش�С
};

//��ʼ������
void init_array(struct array* array, int element_size);

//���Ԫ�ص�������
void add_element(struct array* array, void* element);

//ɾ�������е�index��Ԫ��
void remove_element(struct array* array, int index);

//���������е�index��Ԫ�ص�ֵ
void* update_element(struct array* array, int index, const void* element);

//��ȡ�����еĵ�index��Ԫ��
void* get_element(struct array* array, int index);

//�������Ԫ���Լ��ڴ�
void clear_array(struct array* array);

//�������Ԫ��
void clear_all_elements(struct array* array);

#endif // !_ARRAY_H_