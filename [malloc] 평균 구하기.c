#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int sum = 0;
    float avg;

    scanf("%d", &n);

    int* arr = (int*)malloc(n);

    if (arr == NULL)
    {
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("정수 %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    avg = (float)sum / n;
    printf("평균: %.1f\n", avg);

    free(arr);

    return 0;
}
