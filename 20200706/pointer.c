#include <stdio.h>

int f(int * q){
    *q = 200;
}

int main(void){
    int i = 100;
    printf("%d\n", i);
    int * p;
    p = &i;
    f(p);
    printf("%d\n", i);

    return 0;
}