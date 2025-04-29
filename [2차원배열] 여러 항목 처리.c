#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];
    int student[2][3];
    int i, j;
    int score, sum;
    float avg;

    for(i = 0; i < 2; i++)
    {
        sum = 0;
        printf("\n%d번 학생 이름 입력 : ", i+1);
        scanf("%s", name);
        for(j = 0; j < 3; j++)
        {
            printf("과목 %d 점수 입력 : ", j+1);
            scanf("%d", &score);
            sum = sum + score;
        }
        printf("\n");
        avg = sum / 3.0;

        printf("%s의 성적 : \n", name);
        printf("총점 : %d\n", sum);
        printf("평균 : %.2f\n", avg);
    }

    return 0;
}
