#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
    int sum;

    sum = a + b;

    return sum;
}

int main()
{
    int a, b;

    printf("두 숫자를 입력하세요 : ");
    scanf("%d %d", &a, &b);
    printf("%d", add(a, b));

    return 0;
}
