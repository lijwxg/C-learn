#include <stdio.h>

int main(void)
{
    int i = 10000;
    int * p;
    p = &i;

    printf("%d\n", sizeof(p));
    printf("%#x", p);
}