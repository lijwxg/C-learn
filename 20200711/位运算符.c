#include <stdio.h>

int main(void)
{
    int i = 2;
    int j = 6;
    printf("####与运算#######\n");
    printf("%d\n", i&j);
    printf("####或运算#######\n");
    int m = 1;
    int n = 6;
    printf("%d\n", m|n);
    printf("####非运算#######\n");
    int k = 3;
    printf("%d\n", ~k);
    printf("####移位运算#######\n");
    int l = 3;
    int x = l << 1;
    printf("%d\n", x);
    return 0;
}