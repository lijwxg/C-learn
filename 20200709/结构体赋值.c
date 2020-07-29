#include <stdio.h>
#include <malloc.h>
#include <string.h>

struct Student
{
    int age;
    char gender;
    char name[100];
};

void ChangInfo(struct Student *stud)
{
    stud->age = 20;
    stud->gender = 'F';
    strncpy(stud->name, "王五", 10);
}

void PrintOut(struct Student *stud)
{
    // 打印学生的信息,
    printf("%d, %c, %s\n", stud->age, stud->gender, stud->name);
}

int main(void)
{
    struct Student *stu;
    stu = (struct Student *)malloc(sizeof(struct Student));

    struct Student stu_zhangsan = {28, 'M', "李四"};
    *stu = stu_zhangsan;
    PrintOut(stu);
    ChangInfo(stu);
    PrintOut(stu);
}
