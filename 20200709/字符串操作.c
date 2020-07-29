#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[20] = "Beijing City";
    printf("%d\n", strlen(name));
    int i;
    for (i = 0; i < strlen(name); i++)
    {
        printf("%d:%c\n",i, name[i]);
    }
}