#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char chs1[6] = "apple"; // null 문자가 들어갈 공간 확보
    char chs2[5] = "apple"; // 확보 안됨

    printf("%s\n", chs1);
    printf("%s", chs2);

    return 0;
}
