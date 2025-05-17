#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* file;
    char name[10];
    int age;

    scanf("%s %d", name, &age);

    file = fopen("test1.txt", "w");
    fprintf(file, "%s %d", name, age);
    fclose(file);

    age=0;
    name[0]='\0';

    file = fopen("test1.txt", "r");
    if(file == NULL)
    {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }
    fscanf(file, "%s %d", name, &age);
    fclose(file);

    printf("%s %d", name, age);

	return 0;
}
