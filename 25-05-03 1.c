#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, i;
    double sum = 0;
    float avg;

    scanf("%d", &n);
    double* arr = (double*)malloc(sizeof(double)*n);

    srand(time(NULL));

    for(i = 0; i < n; i++)
    {
        arr[i] = (rand() % 1000) / 10.0;
        printf("%.2f  ", arr[i]);
        sum = sum + arr[i];
    }
    printf("\n");

    avg = sum / n;

    printf("%.2lf\n", sum);
    printf("%.2lf", avg);

    free(arr);

    return 0;
}
