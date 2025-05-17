#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* file;
    
    // 파일 쓰기 텍스트 모드로 열기
    
    // 파일에 a문자를 랜덤 n개 만큼 쓰기
    
    // 파일 닫기
    
    // 파잉을 읽기 모드로 열기
    
    // 파일 사이즈(byte)를 구해서 출려하기
    
    // 파일 닫기
    
	return 0;
}


int fseek(FILE*, long offset, int whence);
// whence 기준점
// SEEK_SET, SEEK_CUR, SEEK_END

long ftell(FILE*);
