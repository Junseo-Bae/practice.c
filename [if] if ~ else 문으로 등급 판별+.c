#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score;

    printf("점수를 입력하세요 : ");
    scanf("%d", &score);

    if(score >= 0 && score <= 100)
    {
        if(score >= 90)
        {
            printf("A학점");
        }
        else if(score >= 80)
        {
            printf("B학점");
        }
        else if(score >= 70)
        {
            printf("C학점");
        }
        else if(score >= 60)
        {
            printf("D학점");
        }
        else
        {
            printf("F학점");
        }
    }
    else
    {
        printf("점수가 0 ~ 100이 아닙니다.");
    }

    return 0;
}
