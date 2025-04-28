#include <stdio.h>
#include <stdlib.h>

int max(int a, int b)
{
    int temp;

    if(a > b)
    {
        temp = a;
    }
    else if(b > a)
    {
        temp = b;
    }
    return temp;
}

int main()
{
    int a, b;

    printf("두 숫자를 입력하세요 : ");
    scanf("%d %d", &a, &b);
    printf("더 큰 수는 : %d", max(a, b));

    return 0;
}
