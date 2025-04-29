#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 300;
    int *pa = &a;

    printf("%d\n", a);
    printf("%p\n", &a);
    printf("%p\n", pa);
    printf("%p\n", *pa);

    return 0;
}
