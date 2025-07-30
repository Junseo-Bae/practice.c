#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int array_len(int* n)
{
    for(int i = 0; i < SIZE; i++)
    {
        if(n[i] == 0)
        {
            break;
        }
    }
    return i;
}

int quick(int* n)
{
    if(array_len(n) < 2)
    {
        return n;
    }
    
    n[0] 기준
}

int main()
{
    int n[SIZE];
    
    srand(time(NULL));
    
    for(int i = 0; i < SIZE; i++)
    {
        n[i] = rand() % 10 + 1;
    }
    
    quick(n);

    return 0;
}
