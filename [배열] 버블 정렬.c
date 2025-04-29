#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10] = {45, 12, 78, 34, 23, 89, 56, 11, 90, 67};
    int temp;
    int i, j;

    for(i = 0; i < 10 - 1; i++)
    {
        for(j = 0; j < 10 - 1 - i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
