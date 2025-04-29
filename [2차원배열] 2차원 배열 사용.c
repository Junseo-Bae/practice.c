#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pi[3][5] = {
        {135, 150, 148, 160, 153},
        {115, 120, 123, 121, 112},
        {132, 129, 128, 133, 130}};
    int sum;
    float avg;
    int i, j;

    for(i = 0; i < 3; i++)
    {
        sum = 0;
        for(j = 0; j < 5; j++)
        {
            sum = sum + pi[i][j];
        }
        avg = sum / 5;
        if(avg > 140)
        {
            printf("환자 %d번 : 고혈압\n", i+1);
        }
        else
        {
            printf("환자 %d번 : 정상\n", i+1);
        }
    }



    return 0;
}
