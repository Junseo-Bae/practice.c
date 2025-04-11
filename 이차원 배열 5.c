#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 배열 대칭 비교

int main()
{
    int arr[3][3];
    int i, j;
    int flag = 1;
    srand(time(NULL));

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            arr[i][j] = rand() % 10 + 1;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(arr[i][j] != arr[j][i])
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
    {
        printf("배열은 대칭입니다.");
    }
    else
    {
        printf("배열은 대칭이 아닙니다.");
    }

    return 0;
}
