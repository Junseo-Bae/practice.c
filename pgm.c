#include <stdio.h>

int main()
{
    FILE* file;
    char num[3] = "P5";
    int x = 100, y = 100, z = 255, index;
    int i, j;

    file = fopen("test.pgm", "wb");
    fprintf(file, "%s\n%d %d\n%d\n", num, x, y, z);
    char* p = (char*)calloc(x * y, sizeof(char));

    index = (x / 2) - (20 / 2);
    for(i = index; i < index + 20; i++)
    {
        for(j = index; j < index + 20; j++)
        {
            p[i*x+j] = 255;
        }
    }
    fwrite(p, sizeof(char), x * y, file);

    fclose(file);
    free(p);

    return 0;
}
