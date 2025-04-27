#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("숫자 입력 : ");
    scanf("%d", &num);

    if(num % 2 == 0)
    {
        printf("입력한 숫자는 짝수입니다.");
    }
    else
    {
        printf("입력한 숫자는 홀수입니다.");
    }

    return 0;
}
