#include <stdio.h>
#include <stdlib.h>

int sum(int sale[][5])
{
    int i, j;
    int sum = 0;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 5; j++)
        {
            sum = sum + sale[i][j];
        }
    }
    return sum;
}

int main()
{
    int sale[3][5] = {
            {2025, 353, 127, 83, 883},
            {2026, 387, 133, 89, 907},
            {2027, 439, 135, 92, 965}};
    int total;

    total = sum(sale);

    printf("%d", total);

    return 0;
}
