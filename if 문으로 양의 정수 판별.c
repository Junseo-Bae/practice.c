#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    
    printf("정수를 입력하세요 : ");
    scanf("%d", &num);

    if(num > 0)
    {
        printf("양의 정수 입니다.");
    }
    else if(num == 0)
    {
        printf("0 입니다.");
    }
    else
    {
        printf("음의 정수 입니다.");
    }

    return 0;
}
