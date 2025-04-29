#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 30;
    int *p = &a;

    *p = 50;

    printf("%p\n", p);
    printf("%d\n", a);

    return 0;
}
