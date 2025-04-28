#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int count = 1;
    int sum = 0;

    while(1)
    {
        sum = sum + count;
        printf("%d까지 합 : %d\n", count,sum);
        count++;
        if(sum > 50)
        {
            break;
        }
    }

    return 0;
}
