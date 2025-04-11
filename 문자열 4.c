#include <stdio.h>
#include <stdlib.h>

// 짝수만 출력

int main()
{
    char str[10];
    int i;

    scanf("%s", str);

    for(i = 0; i < strlen(str); i++)
    {
        if( (str[i] - '0') % 2 == 0)
        {
            printf("%c ", str[i]);
        }
    }

    return 0;
}
