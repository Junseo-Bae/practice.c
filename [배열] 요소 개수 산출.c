#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int point[] = {23, 35, 2, 9, 75, 96, 82, 16, 48, 85, 33, 67, 95, 37};
    int count;

    count = sizeof(point) / sizeof(point[0]); // point의 총 바이트 / 요소 한 개 바이트 = 개수

    printf("%d", count);

    return 0;
}
