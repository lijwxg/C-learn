#include <stdio.h>

int main(void)
{
    int len;
    int list[] = {4,3,5,1};
    int i=0, j, tmp;
    len = sizeof(list)/sizeof(int);

    // for (i = 0; i < len; i++)
    // {
    //     printf("%d\n", list[i]);
    // }

    for (i = 0; i < len -1; i++)
    {
        for (j = 0; j < len - i; j++)
        {
            if (list[j] > list[j + 1])
            {
                tmp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = tmp;
            }
        }
    }
    printf("####################\n");
    for (i = 0; i < len; i++)
    {
        printf("%d\n", list[i]);
    }
}