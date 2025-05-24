#include <stdio.h>

int main()
{
    FILE* file;
    int i, num;
    int sum = 0;

    file = fopen("numbers.txt", "w");
    for(i = 1; i <= 100; i++)
    {
        fprintf(file, "%d\n", i);
    }
    fclose(file);

    file = fopen("numbers.txt", "r");
    for(i = 1; i <= 100; i++)
    {
        fscanf(file, "%d", &num);
        sum = sum + num;
    }

    printf("%d", sum);

    return 0;
}
