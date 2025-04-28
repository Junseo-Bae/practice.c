#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    int sum = 0;

    printf("숫자를 입력 하세요 : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(i % 5 == 0)
        {
            sum = sum + i;
        }
    }

    printf("%d", sum);

    return 0;
}
