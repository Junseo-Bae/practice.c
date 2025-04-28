#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int sum = 0;

    for(i = 1; i <= 10; i++)
    {
        if(i % 2 != 0)
        {
            sum = sum + i;
        }
    }

    printf("%d", sum);

    return 0;
}
