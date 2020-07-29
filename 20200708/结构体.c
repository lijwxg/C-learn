# include <stdio.h>

int main(void)
{
    struct Student
    {
        char * name;
        int age;
        char  gender;
    };

    struct Student st = {"lijiawen", 12, 'M'};
    printf("student name:%s, age:%d, gender:%s", st.name, st.age, st.gender);
    
}