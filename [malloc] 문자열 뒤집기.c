#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, len;

    scanf("%d", &n);

    char* str = (char*)malloc(n);

    if (str == NULL)
    {
        return 1;
    }

    scanf("%s", str);

    len = strlen(str);

    for (i = len - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    free(str);

    return 0;
}
