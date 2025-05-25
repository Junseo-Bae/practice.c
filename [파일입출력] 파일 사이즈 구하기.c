#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE* file;

    // 파일 쓰기 텍스트 모드로 열기
    file = fopen("test.txt", "w");

    // 파일에 a문자를 랜덤 n개 만큼 쓰기
    srand(time(NULL));
    int i, n;

    n = rand() % 10 + 1;

    for(i = 0; i < n; i++)
    {
        fprintf(file, "%c", 'a');
    }
    // 파일 닫기
    fclose(file);

    // 파일을 읽기 모드로 열기
    file = fopen("test.txt", "r");

    // 파일 사이즈(byte)를 구해서 출려하기
    fseek(file, 0, SEEK_END);
    printf("%d", ftell(file));

    // 파일 닫기
    fclose(file);

	return 0;
}
