#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score, result;

    printf("점수를 입력하세요 : ");
    scanf("%d", &score);

    result = score / 10;

    switch(result)
    {
    case 10:
    case 9:
        printf("A");
        break;

    case 8:
        printf("B");
        break;

    case 7:
        printf("C");
        break;

    case 6:
        printf("D");
        break;

    default:
        printf("F");
        break;
    }

    return 0;
}
