#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score[5] = {87, 92, 89, 98, 78};
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("인덱스 %d : %d\n", i, score[i]);
    }

    return 0;
}
