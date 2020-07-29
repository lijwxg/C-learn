#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>
#include <stdlib.h>

struct Arr
{
    int *Base; //存储在数组中的第一个元素的地址
    int len;   //数组所能容乃的最大元素的个数
    int cnt;   //当前数组有效元素的个数
};

void init(struct Arr *arr, int len);
bool append(struct Arr *arr, int val);
int get();
bool insert();
bool delete ();
bool is_empty(const struct Arr * arr);
bool is_full(const struct Arr * arr);
void sort();
void show(const struct Arr * arr);
void reverse();

int main(void)
{
    struct Arr arr;

    init(&arr, 2);
    append(&arr,10);
    append(&arr,8);
    append(&arr,7);
    show(&arr);
    printf("%d", arr.cnt);

    return 0;
}


// 初始化数组, 动态申请内存, 存储的元素为数字
void init(struct Arr *arr, int len)
{
    arr->Base = (int *)malloc(sizeof(int) * len);
    if (NULL == arr->Base)
    {
        printf("分配内存失败\n");
        exit(-1);
    }
    else
    {
        arr->len = len;
        arr->cnt = 0;
    }
    return;
}

// 往数组中添加值
bool append(struct Arr *arr, int val)
{
    if (is_full(arr))
    {
        printf("数组已经满了,插入%d失败\n", val);
    }
    else
    {
        arr->Base[arr->cnt] = val;
        arr->cnt +=1;
    }
    
    
}

// 展示数组中的值
void show(const struct Arr * arr)
{
    if (is_empty(arr))
    {
        printf("数组为空");
        exit(-1);
    }
    else
    {
        for (int i = 0; i < arr->cnt; i++)
        {
            printf("元素值为: %d\n", arr->Base[i]);
        }
        
    }
    
    
}

// 判断数组是否为空
bool is_empty(const struct Arr * arr)
{
    if (0 == arr->cnt)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

// 判断数组是否满
bool is_full(const struct Arr * arr)
{
    if (arr->len == arr->cnt)
    {
        return true;
    }
    else
    {
        return false;
    }
}