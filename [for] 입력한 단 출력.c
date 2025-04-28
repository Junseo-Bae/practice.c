#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    printf("단 입력 : ");
    scanf("%d", &n);

    for(i = 1; i <= 9; i++)
    {
        printf("%d * %d = %d\n", n, i, n*i);
    }

    return 0;
}
