#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int arr[7] = {5, 4, 1, 3, 2, 7, 6};
    int n, i;

    printf("숫자 입력 (1~7) : ");
    scanf("%d", &n);

    for(i = 0; i < 7; i++)
    {
        if(n == arr[i])
        {
            printf("순차 탐색 횟수 : %d\n", i + 1);
            printf("인덱스 : %d", i);
        }
    }

    return 0;
}
