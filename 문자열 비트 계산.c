#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n[5] = "hello";

    for(int i = 0; i < 5; i++)
    {
        unsigned int a = 1;
        a <<= 7;

        for(int j = 1; j <= 8; j++)
        {
            printf("%d", n[i] & a ? 1 : 0);
            if(j == 4)
            {
                printf(" ");
            }
            a >>= 1;
        }
        printf(" | ");
    }

    return 0;
}
