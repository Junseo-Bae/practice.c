#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int arr[5] = {5, 4, 1, 3, 2};
    int i, j, temp;

    for(i = 0; i < 5-1; i++)
    {
        for(j = i+1; j < 5; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
