#include <stdio.h>
#include <stdlib.h>

int mem[45];

int fib(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }

    if(mem[n] != 0)
    {
        return mem[n];
    }

    mem[n] = fib(n-2) + fib(n-1);

    return mem[n];
}

int main()
{
    mem[0] = 1;
    mem[1] = 1;
    int n = 45;

    printf("%d", fib(n));

    return 0;
}
