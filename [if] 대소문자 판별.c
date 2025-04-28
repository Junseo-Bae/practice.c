#include <stdio.h>
#include <stdlib.h>

int main()
{
    char alphabet;

    printf("알파벳을 입력하세요 : ");
    scanf("%c", &alphabet);

    if(alphabet >= 'A' && alphabet <= 'Z')
    {
        printf("대문자 입니다.");
    }
    else
    {
        printf("소문자 입니다.");
    }

    return 0;
}
