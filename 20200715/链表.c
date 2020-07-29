#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>

typedef struct sNode
{
    char *item;
    struct sNode *NextNode
}Node, *LinkNode;

LinkNode initList();
bool insertList(Node node, int i);
bool appendList(Node node);
bool deleteNode(LinkNode);
void showList(const LinkNode);

LinkNode initList()
{
    int num;
    int val;
    LinkNode HeadNode = (LinkNode)malloc(sizeof(Node));
    printf("请输入要构建的链表长度: ");
    scanf("%d", &num);
    LinkNode link = HeadNode;
    for (int i = 0; i < num; i++)
    {
        printf("请输入第%d个节点的值: ");
        scanf("%d", &val);
        LinkNode node = (LinkNode)malloc(sizeof(Node));
        node->item = val;
        node->NextNode = NULL;
        link->NextNode = node;
        link = node;
    }
    return HeadNode;
}

void showList(const LinkNode phead)
{
    LinkNode node = phead->NextNode;
    while (node)
    {
        printf("节点值: %d\n", node->item);
        node = node->NextNode;
    }
}

bool insertList(Node node, int i)
{

}

int main(void)
{
    // 创建一个头结点, 创建一个头指针指向头结点
    LinkNode list = initList();
    showList(list);
}
