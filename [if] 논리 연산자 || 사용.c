#include <stdio.h>
#include <stdlib.h>

int main()
{
    char blood_type;

    printf("혈액형을 입력하세요 : ");
    scanf("%c", &blood_type);

    if(blood_type == 'A' || blood_type == 'a')
    {
        printf("부드럽고 섬세한 성향");
    }
    else if(blood_type == 'B' || blood_type == 'b')
    {
        printf("주위 변화에 민감한 성향");
    }
    else if(blood_type == 'AB' || blood_type == 'ab')
    {
        printf("예술적인 감각을 가진 성향");
    }
    else if(blood_type == 'O' || blood_type == 'o')
    {
        printf("활발하고 쾌활한 성향");
    }
    else
    {
        printf("재실행");
    }

    return 0;
}
