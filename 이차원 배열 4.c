#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 각 행의 평균 구하기

int main()
{
    int arr[4][2];
    int i, j;
    int avg;
    int sum = 0;
    srand(time(NULL));

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 2; j++)
        {
            arr[i][j] = rand() % 100 + 1;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 2; j++)
        {
            sum = sum + arr[i][j];
        }
        avg = sum / 2;
        printf("%d ", avg);
    }

    return 0;
}
