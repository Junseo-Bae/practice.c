#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 값 검색하기

int main()
{
    int arr[3][3];
    int i, j, n;
    int flag = 0;
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

    printf("검색할 값 : ");
    scanf("%d", &n);

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(arr[i][j] == n)
            {
                printf("위치 : %d행 %d열\n", i, j);
                flag = 1;
            }
        }
    }
    if(flag == 0)
    {
        printf("없음");
    }

    return 0;
}
