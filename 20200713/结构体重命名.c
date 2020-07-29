#include <stdio.h>

typedef struct
{
    int age;
    char name[];
} ST;

typedef struct Node
{
    char *name;
    struct Node * NextNode
}Node, *LinkNode;


int main(void)
{
    ST st;
    st.age = 12;
    char name[] = "list";
    printf("size: %d\n", sizeof(ST));

    char demo[] = "baidu" ;
    printf("%c", demo[2]);
    return 0;
}
