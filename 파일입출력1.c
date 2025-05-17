#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fp = fopen("text.txt", "w");
    char str[100];
    int i;

    for(i = 0; i < 3; i++)
    {
        fgets(str, 100, stdin);
        fputs(str, fp);
    }
    fclose(fp);

    fp = fopen("text.txt", "r");
    for(i = 0; i < 3; i++)
    {
        fgets(str, 100, fp);
        printf("%s", str);
    }
    fclose(fp);

	return 0;
}
