#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void quick(int* n, int length)
{
    if(length < 2)
    {
        return n;
    }

    int pivot = n[length-1];
    int i, j;
    j = length - 2;
    for(i = 0; i < length-1; i++)
    {
        if(pivot < n[i])
        {
            int temp = n[i];
            n[i] = n[j];
            n[j] = temp;
            j--;
            i--;
        }
        if(i >= j)
        {
            break;
        }
    }
    j++;
    int temp = n[j];
    n[j] = n[length-1];
    n[length-1] = temp;

    quick(n, j);
    quick(n+j+1, length-j-1);
}

int main()
{
    int n[SIZE];

    srand(time(NULL));

    for(int i = 0; i < SIZE; i++)
    {
        n[i] = rand() % 100 + 1;
        printf("%d ", n[i]);
    }
    printf("\n");

    for(int i = 0; i < 10; i++)
    {
        printf("%d ", n[i]);
    }

    return 0;
}
