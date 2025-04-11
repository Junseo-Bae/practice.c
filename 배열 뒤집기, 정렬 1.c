#include <stdio.h>
#include <stdlib.h>

// 배열 뒤집기

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int i;
    int temp;

    for(i = 0; i < 5 / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[5 - 1 - i];
        arr[5 - 1 - i] = temp;
    }

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
