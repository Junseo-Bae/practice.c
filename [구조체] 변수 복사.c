#include <stdio.h>
#include <stdlib.h>

struct person {

    char name[10];
    char gender;
    int age;
};

int main()
{
    struct person p1 = {"홍길동", 'M', 23};
    struct person p2 = {"김가을", 'W', 20};

    p2 = p1;

    printf("%s %c %d\n", p1.name, p1.gender, p1.age);
    printf("%s %c %d", p2.name, p2.gender, p2.age);


    return 0;
}
