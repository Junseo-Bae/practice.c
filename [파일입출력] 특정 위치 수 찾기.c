#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE* file;
    int i, n, num;
    srand(time(NULL));

    file = fopen("test.bin", "wb");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        num = rand() % 100 + 1;
        printf("%d ", num);
        fwrite(&num, sizeof(int), 1, file);
    }
    fclose(file);
    printf("\n");

    scanf("%d", &n);

    file = fopen("test.bin", "rb");
    fseek(file, sizeof(int) * (n-1), SEEK_SET);
    fread(&num, sizeof(int), 1, file);
    printf("%d", num);
    fclose(file);

    return 0;
}
