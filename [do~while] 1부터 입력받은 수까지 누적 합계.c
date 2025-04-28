#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, count;
    int sum = 0;

    printf("숫자를 입력하세요 : ");
    scanf("%d", &n);

    do {
        sum = sum + count;
        count++;
    } while(count <= n);

    printf("%d", sum);

    return 0;
}
