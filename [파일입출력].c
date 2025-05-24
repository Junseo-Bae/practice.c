#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct student {
    char name[10];
    int std_num;
    int score[5];
    float avg;
};

int main()
{
    struct student std[100];
    int i, j, n;
    srand(time(NULL));

    for(i = 0; i < 100; i++)
    {
        n = rand() % 7 + 3;
        for(j = 0; j < n; j++)
        {
            std[i].name[j] = rand() % 26 + 'a';
        }
        std[i].name[j] = '\0';

        std[i].std_num = (rand() % 200 + 1) + 2025000;

        for(j = 0; j < 5; j++)
        {
            std[i].score[j] = rand() % 100 + 1;
        }

        std[i].avg = 0.0f;
    }

    FILE* file;

    file = fopen("student.bin", "wb");
    fwrite(std, sizeof(struct student), 100, file);
    fclose(file);

	struct student std[100];
    int i, j, n;
    int sum;

    FILE* file;

    file = fopen("student.bin", "rb");
    fread(std, sizeof(struct student), 100, file);
    fclose(file);

    for(i = 0; i < 100; i++)
    {
        sum = 0;
        for(j = 0; j < 5; j++)
        {
            sum = sum + std[i].score[j];
        }
        std[i].avg = sum / 5.0;
    }

    file = fopen("student.bin", "wb");
    fwrite(std, sizeof(struct student), 100, file);
    fclose(file);
    
	return 0;
}
