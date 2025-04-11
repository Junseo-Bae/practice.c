#include <stdio.h>
#include <stdlib.h>

// 문자열 각 자리수 출력

int main()
{
    char str[10];
    int i;

    scanf("%s", str);

    for(i = 0; i < 10; i++)
    {
        if(str[i] != '\0')
        {
            printf("%c\n", str[i]);
        }
    }
    
    return 0;
}
