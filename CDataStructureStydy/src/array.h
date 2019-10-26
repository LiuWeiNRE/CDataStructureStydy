#ifndef _ARRAY_H_

#define _ARRAY_H_

struct array
{
	char* memory;//数组内存地址
	int max_count;//数组最大长度
	int length;//数组当前长度
	int element_size;//数组元素大小
};

//初始化数组
void init_array(struct array* array, int element_size);

//添加元素到数组中
void add_element(struct array* array, void* element);

//删除数组中第index个元素
void remove_element(struct array* array, int index);

//更新数组中第index个元素的值
void* update_element(struct array* array, int index, const void* element);

//获取数组中的第index个元素
void* get_element(struct array* array, int index);

//清除数组元素以及内存
void clear_array(struct array* array);

//清空数组元素
void clear_all_elements(struct array* array);

#endif // !_ARRAY_H_