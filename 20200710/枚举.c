#include <stdio.h>

enum WeekDay
{
    Sunday,
    Monday,
    Thursday,
    Wednesday,
    Tuesday,
    Friday,
    Saturday
};

void f(enum WeekDay d)
{
    switch (d)
    {
    case 1:
        printf("MonDay");
        break;
    case 2:
        printf("Thursday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 0:
        printf("Sunday");
        break;
    default:
        printf("不在范围内");
        break;
    }
}

int main(void)
{
    enum WeekDay day = Friday;
    f(Friday);
}