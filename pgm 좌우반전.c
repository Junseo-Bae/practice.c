#include <stdio.h>
#include <stdlib.h>

int main()
{
    char type[3] = "P5";
    int width = 640;
    int height = 426;
    int color = 255;

    FILE* file = fopen("sample_pgm.pgm", "rb");

    fscanf(file, "%s\n%d %d\n%d", type, &width, &height, &color);

    char* data = (char*)malloc(sizeof(char) * (width*height));

    fread(data, sizeof(char), width * height, file);
    fclose(file);

    int k;
    for(k = 0; k < height; k++)
    {
        int i = width * k, j = width * k + (width - 1);
        while(i < j)
        {
            int temp = data[i];
            data[i] = data[j];
            data[j] = temp;
            i++;
            j--;
        }
    }

    file = fopen("sample.pgm", "wb");
    fprintf(file, "%s\n%d %d\n%d\n", type, width, height, color);
    fwrite(data, sizeof(char), width * height, file);
    fclose(file);

    free(data);

    return 0;
}
