#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 최대값 찾기

int main()
{
    int arr[3][3];
    int i, j;
    int max;
    srand(time(NULL));

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            arr[i][j] = rand() % 100 + 1;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    max = arr[0][0];

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    printf("%d", max);

    return 0;
}
