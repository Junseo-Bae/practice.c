#include <stdio.h>
#include <stdlib.h>

// 문자열 속 숫자들의 합 구하기

int main()
{
    char str[10];
    int i;
    int sum = 0;

    scanf("%s", str);

    for(i = 0; i < strlen(str); i++)
    {
        sum = sum + (str[i] - '0');
    }
    printf("%d", sum);

    return 0;
}
