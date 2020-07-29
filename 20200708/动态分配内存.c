# include <stdio.h>
# include <malloc.h>

void f(int * q)
{
    // printf("%p\n", q);
    * q = 10;
    // printf("%d\n", &q);
}

int main(void)
{

    int * p;
    p = (int *)malloc(sizeof(int));

    * p = 200;
    printf("p: %d\n",* p);
    f(p);
    printf("p: %d\n",* p);

    printf("p地址: %d\n", &p);
}
