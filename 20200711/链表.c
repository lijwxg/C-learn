#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node
{
    int age;            //链表存放的数据体
    struct Node *pNext; //链表存放的下一个节点的指向
}Node, * PNode;

// 创建链表
PNode create_list(void)
{
    int len; // 定义的链表的长度
    int i = 0;
    int val; // 临时存放用户输入的链表的值

    printf("请输入要创建的链表的长度:");
    scanf("%d", &len);
    // 定义一个头结点, 指针的定义只分配内存,不初始化内存上的值
    PNode pHead = (PNode)malloc(sizeof(Node));

    if (NULL == pHead)
    {
        printf("分配内存失败\n");
        exit(-1);
    }
    // 定义一个尾节点, 尾节点的下一个节点指向为空, 尾节点指向头结点
    // pHead只是一个指针,指向链表, 定义一个指针,标示正在进行操作的数据节点
    PNode pTail=pHead;

    pTail->pNext = NULL;

    while (i < len)
    {
        i++;
        printf("请输入第%d个节点的值:", i);
        scanf("%d", &val);
        // 指针的定义只分配内存,不初始化内存上的值
        // 定义一个新的结点
        PNode node = (PNode)malloc(sizeof(Node));

        if (NULL == node)
        {
            printf("分配内存失败\n");
            exit(-1);
        }
        /*
         * 新节点的值,实际是存放在原来的尾节点上
         * 将原尾节点指向新建的节点, 新节点的pNext为NULL, 让后修改pTail指针的值, 指向新节点.
         */
        node->age = val;
        node->pNext = NULL;
        pTail->pNext = node;
        pTail = node;
    }

    return pHead;
}

bool empty_list(const PNode pHead)
{
    if (pHead->pNext == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void read_list(const PNode pHead)
{

    PNode p = pHead->pNext;
    while (p != NULL)
    {
        printf("%d\n", p->age);
        p = p->pNext;
    }
    return;
}

int main(void)
{
    PNode pHead = NULL;
    pHead = create_list();

    read_list(pHead);

    return 0;
}