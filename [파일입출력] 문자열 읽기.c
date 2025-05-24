#include <stdio.h>

int main()
{
    char arr[30];

    scanf("%s", arr);

    FILE* file;

    file = fopen("output.txt", "w");
    fprintf(file, "%s", arr);
    fclose(file);

    file = fopen("output.txt", "r");
    fgets(arr, 30, file);
    fclose(file);

    printf("%s", arr);

    return 0;
}
