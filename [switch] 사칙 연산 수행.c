#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    char op;

    printf("두 정수와 연산자 입력 : ");
    scanf("%d %c %d", &x, &op, &y);

    switch(op)
    {
    case '+':
        printf("%d %c %d = %d", x, op, y, x+y);
        break;

    case '-':
        printf("%d %c %d = %d", x, op, y, x-y);
        break;

    case '*':
        printf("%d %c %d = %d", x, op, y, x*y);
        break;

    case '/':
        printf("%d %c %d = %d", x, op, y, x/y);
        break;
    }

    return 0;
}
