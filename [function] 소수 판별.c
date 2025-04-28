#include <stdio.h>
#include <stdlib.h>

void prime(int n)
{
    int i;
    int flag = 0;

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        printf("소수 입니다.");
    }
    else
    {
        printf("소수가 아닙니다.");
    }
}

int main()
{
    int n;

    printf("숫자를 입력하세요 : ");
    scanf("%d", &n);
    prime(n);

    return 0;
}
