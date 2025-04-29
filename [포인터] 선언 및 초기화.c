#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 8;
    int pa = &a;

    float b = 3.75;
    float *pb = &b;

    printf("a의 값 : %d\n", a);
    printf("a의 주소값 : %p\n", &a);
    printf("pa의 주소값 : %p\n", pa);
    printf("\n");

    printf("b의 값 : %d\n", b);
    printf("b의 주소값 : %p\n", &b);
    printf("pb의 주소값 : %p\n", pb);

    return 0;
}
