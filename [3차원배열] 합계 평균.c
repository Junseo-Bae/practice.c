#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score[2][3][2];
    int i, j, k;
    int sum;
    float avg;

    for(i = 0; i < 2; i++)
    {
        sum = 0;
        for(j = 0; j < 3; j++)
        {
            for(k = 0; k < 2; k++)
            {
                scanf("%d", &score[i][j][k]);
                sum = sum + score[i][j][k];
            }
        }
        avg = sum / 6.0;
        printf("총점 : %d, 평균 : %.2f\n", sum, avg);
    }

    return 0;
}
