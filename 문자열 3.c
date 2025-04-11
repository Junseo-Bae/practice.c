#include <stdio.h>
#include <stdlib.h>

// 변환 후 음수까지 확인

int main()
{
    char str[30];
    int num = 0;
    int i;

    scanf("%s", str);

    if(str[0] == '-')
    {
        for(i = 1; str[i] != '\0'; i++)
        {
            num = num * 10 + (str[i] - '0');
        }
        num *= -1;
    }
    else
    {
        for(i = 0; str[i] != '\0'; i++)
        {
            num = num * 10 + (str[i] - '0');
        }
    }

    printf("%d", num);

    return 0;
}
