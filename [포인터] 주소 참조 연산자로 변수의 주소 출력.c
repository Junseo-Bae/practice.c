#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 3;
    char ch = 'A';
    float f_num = 34.6;

    printf("%u %u %u\n", &num, &ch, &f_num);

    printf("%X %X %X", &num, &ch, &f_num);

    return 0;
}
