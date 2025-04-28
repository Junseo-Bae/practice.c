#include <stdio.h>
#include <stdlib.h>

int main()
{
    char season;

    printf("봄 : A or a\n");
    printf("여름 : B or b\n");
    printf("가을 : C or c\n");
    printf("겨울 : D or d\n");
    printf("계절을 입력하세요 : ");
    scanf("%c", &season);

    switch(season)
    {
    case 'A':
    case 'a':
        printf("만물이 소생하는 계절");
        break;

    case 'B':
    case 'b':
        printf("시원한 계곡을 즐기는 계절");
        break;

    case 'C':
    case 'c':
        printf("곡식과 과일이 풍성한 계절");
        break;

    case 'D':
    case 'd':
        printf("새하얀 눈이 덮인 스키의 계절");
        break;
    }

    return 0;
}
