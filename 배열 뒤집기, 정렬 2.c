#include <stdio.h>
#include <stdlib.h>

// 배열 오름차순 정렬

int main()
{
    int arr[5] = {3, 1, 5, 2, 4};
    int i, j, temp;

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4 - i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
