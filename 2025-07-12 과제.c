#include <stdio.h>
#include <stdlib.h>

struct student
{
    int std_no;
    char name[10];
    double grade;
};

void add_student()
{
    struct student s;
    FILE* file;
    file = fopen("student.bin", "ab");
    scanf("%d", &s.std_no);
    scanf("%s", s.name);
    scanf("%lf", &s.grade);
    fwrite(&s, sizeof(struct student), 1, file);
    fclose(file);
}

int main()
{
    while(1)
    {
        int menu;
        scanf("%d", &menu);
        if(menu == 4)
        {
            break;
        }
        else if(menu == 1)
        {
            add_student();
        }
    }

    return 0;
}
