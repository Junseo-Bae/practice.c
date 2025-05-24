#include <stdio.h>

int main()
{
    char arr[30];

    scanf("%s", arr);

    FILE* file;

    file = fopen("ountput.txt", "w");
    fprintf(file, "%s", arr);
    fclose(file);

    return 0;
}
