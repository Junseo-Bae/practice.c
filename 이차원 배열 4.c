#include <stdio.h>
#include <stdlib.h>

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
            arr[i][j] = rand() % 10 + 1;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 4; i++)
    {
        sum = 0;
        for(j = 0; j < 2; j++)
        {
            sum = sum + arr[i][j];
        }
        avg = sum / 2;
        printf("%d ", avg);
    }

    return 0;
}
