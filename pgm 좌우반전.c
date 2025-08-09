#include <stdio.h>
#include <stdlib.h>

int main() {

    char type[3] = "P5";
    int width = 640;
    int height = 426;
    int color = 255;

    FILE* file = fopen("sample_pgm.pgm", "rb");

    fscanf(file, "%s\n%d %d\n%d", type, &width, &height, &color);

    char* temp = (char*)malloc(sizeof(char) * width);
    
    fread(temp, sizeof(char), width * height, file);
    fclose(file);
    
    for()
    {
        for()
        {
            char tmp = temp[]
        }
    }

    return 0;
}
