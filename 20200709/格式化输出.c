#include <stdio.h>
#define POEM "ONE DAY I'll Fly Away, leave all this to yesterday."

int main(void)
{
    printf("**%70s**\n", POEM);
    printf("**%70.8s**\n", POEM);
    printf("**%-70.8s**\n", POEM);
    printf("**%-70.8s**\n", POEM);
    return 0;
}
