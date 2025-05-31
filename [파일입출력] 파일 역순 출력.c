#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file = fopen("test.txt", "r");

    if(!file)
    {
        printf("파일 열기 실패");
        return 1;
    }

    int i, n;
    char word;

    fseek(file, 0, SEEK_END);
    n = ftell(file);
    for(i = 1; i <= n; i++)
    {
        fseek(file, -sizeof(char)*i, SEEK_END);
        word = fgetc(file);
        printf("%c", word);
    }

    return 0;
}
