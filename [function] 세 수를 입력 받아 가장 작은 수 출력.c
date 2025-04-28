#include <stdio.h>
#include <stdlib.h>

int min(int a, int b, int c)
{
    int small = a;

    if(b < small)
    {
        small = b;
    }
    if(c < small)
    {
        small = c;
    }
    return small;
}

int main()
{
    int a, b, c;

    printf("세 수를 입력하세요 : ");
    scanf("%d %d %d", &a, &b, &c);

    printf("%d", min(a, b, c));

    return 0;
}
