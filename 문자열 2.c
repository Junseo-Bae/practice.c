#include <stdio.h>
#include <stdlib.h>

// 문자열을 정수로 변환

int main()
{
    char str[10];
    int i;
    int num = 0;

    scanf("%s", str);

    for(i = 0; i < 10; i++)
    {
        if(str[i] != '\0')
        {
            num = num * 10 + (str[i] - '0');
        }
    }
    printf("%d", num);

    return 0;
}
