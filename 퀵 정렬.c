#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int quick(int* n, int length)
{
    if(length < 2)
    {
        return n;
    }

    int pivot = n[0];

    int left[10] = {0,};
    int lidx = 0;

    int right[10] = {0,};
    int ridx = 0;

    for(int i = 1; i < length; i++)
    {
        if(pivot > n[i])
        {
            left[lidx++] = n[i];
        }
        else if(pivot <= n[i])
        {
            right[ridx++] = n[i];
        }
    }

    int* lp = quick(left, lidx);
    int* rp = quick(right, ridx);

    int* result_arr = (int*)malloc(sizeof(int)*SIZE);

    int i;
    for(i = 0; i < lidx; i++)
    {
        result_arr[i] = lp[i];
    }

    result_arr[i++] = pivot;

    for(int j = 0; j < ridx; j++)
    {
        result_arr[i+j] = rp[j];
    }

    return result_arr;
}

int main()
{
    int n[SIZE];

    srand(time(NULL));

    for(int i = 0; i < SIZE; i++)
    {
        n[i] = rand() % 10 + 1;
        printf("%d ", n[i]);
    }
    printf("\n");

    int* arr = quick(n, 10);

    for(int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
