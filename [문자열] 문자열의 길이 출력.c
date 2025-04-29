#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char str[20];
    int i, length = 0;

    printf("문자열을 입력하세요 : ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    printf("%d", length);

    return 0;
}
