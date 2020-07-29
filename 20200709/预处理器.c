#include <stdio.h>
// 定义常量值π
#define pi 3.1415926

int main(void)
{
    float area, diameter;
    // 给圆的直径赋值
    diameter = 2;
    area = pi * diameter;
    printf("圆的周长是: %f", area);
}