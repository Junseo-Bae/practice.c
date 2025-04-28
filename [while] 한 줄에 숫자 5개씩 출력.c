#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 1;

    while(n <= 30)
    {
        printf("%2d ", n);
        if(n % 5 == 0)
        {
            printf("\n");
        }
        n++;
    }

    return 0;
}
