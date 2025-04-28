#include <stdio.h>
#include <stdlib.h>

int main()
{
    char start;
    int score;

    do {
        printf("프로그램 실행 (Y/N) : ");
        scanf("%c", &start);

        if(start == 'Y' || start == 'y')
        {
            printf("점수를 입력하세요 : ");
            scanf("%d", &score);

            if(score >= 90 && score <= 100)
            {
                printf("A학점\n");
            }
            else if(score >= 80 && score < 90)
            {
                printf("B학점\n");
            }
            else if(score >= 70 && score < 80)
            {
                printf("C학점\n");
            }
            else if(score >= 60 && score < 70)
                printf("D학점\n");
            else
            {
                printf("F학점\n");
            }
        }
        else if(start == 'N' || start == 'n')
        {
            printf("프로그램 종료");
            break;
        }
        getchar();
    } while(1);

    return 0;
}
