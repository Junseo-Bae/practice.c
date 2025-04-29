#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int arr[5];
    srand(time(NULL));
    int i;

    for(i = 0; i < 5; i++)
    {
        arr[i] = rand() % 500 + 1;
        printf("%d ", arr[i]);
    }

    return 0;
}
