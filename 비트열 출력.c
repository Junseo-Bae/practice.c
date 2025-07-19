#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int mask = 1 << 31;
    int a;
    scanf("%d", &a);
    for(int i = 1; i <= 32; i++)
    {
        printf("%d", a & mask ? 1:0);
        if(i % 8 == 0)
        {
            printf("|");
        }
        else if(i % 4 == 0)
        {
            printf(" ");
        }
        mask >>= 1;
    }

    return 0;
}
