#include <stdio.h>

int main()
{
    char str[100];
    char enc[100];
    char dec[100];
    char key = 'a';

    printf("문자열을 입력하세요..");
    scanf("%s", str);
  
    printf("original : %s\n", str);
    for(int i = 0; str[i] != '\0'; i++)
    {
        unsigned char a = 1 << 7;
        for(int j = 1; j <= 8; j++)
        {
            printf("%d", str[i] & a ? 1 : 0);
            if(j == 4) printf(" ");
            a >>= 1;
        }
        printf(" | ");
    }
    printf("\n");

    for(int i = 0; str[i] != '\0'; i++)
    {
        enc[i] = str[i] ^ key;
    }
    enc[strlen(str)] = '\0';

    printf("encrypt : %s\n", enc);
    for(int i = 0; enc[i] != '\0'; i++)
    {
        unsigned char a = 1 << 7;
        for(int j = 1; j <= 8; j++)
        {
            printf("%d", enc[i] & a ? 1 : 0);
            if(j == 4) printf(" ");
            a >>= 1;
        }
        printf(" | ");
    }
    printf("\n");

    for(int i = 0; enc[i] != '\0'; i++)
    {
        dec[i] = enc[i] ^ key;
    }
    dec[strlen(str)] = '\0';

    printf("decrypt : %s\n", dec);
    for(int i = 0; dec[i] != '\0'; i++)
    {
        unsigned char a = 1 << 7;
        for(int j = 1; j <= 8; j++)
        {
            printf("%d", dec[i] & a ? 1 : 0);
            if(j == 4) printf(" ");
            a >>= 1;
        }
        printf(" | ");
    }
    printf("\n");

    return 0;
}
