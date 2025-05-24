#include <stdio.h>

int main()
{
    FILE* file;
    int i;

    file = fopen("numbers.txt", "w");
    for(i = 1; i <= 100; i++)
    {
        fprintf(file, "%d\n", i);
    }
    fclose(file);

    return 0;
}
