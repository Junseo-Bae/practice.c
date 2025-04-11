#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 배열의 전체 합 구하기

int main()
{
    int arr[2][4];
    int i, j;
    int sum = 0;
    srand(time(NULL));

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 4; j++)
        {
            arr[i][j] = rand() % 10 + 1;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 4; j++)
        {
            sum = sum + arr[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}
