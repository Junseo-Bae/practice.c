#include <stdio.h>
#include <stdlib.h>

struct person {

    char name[10];
    char gender;
    int age;
};

int main()
{
    struct person p[3] = {
                {"홍길동", 'M', 23},
                {"김가을", 'W', 20},
                {"이겨레", 'M', 25}};

    int i;

    for(i = 0; i < 3; i++)
    {
        printf("%s %c %d\n", p[i].name, p[i].gender, p[i].age);
    }

    return 0;
}
