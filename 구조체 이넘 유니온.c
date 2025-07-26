#include <stdio.h>

struct Triangle
{
    int base;
    int height;
};

struct Circle
{
    int radius;
};

struct Rectangle
{
    int width;
    int height;
};

enum Diagram
{
    TRIANGLE = 1,
    CIRCLE,
    RECTANGLE
};

union Share
{
    struct Triangle t;
    struct Circle c;
    struct Rectangle r;
};

struct Shape
{
    enum Diagram type;
    union Share shape;
};

int main()
{
    int n, m, i;

    scanf("%d", &n);

    struct Shape* s = (struct Shape*)malloc(sizeof(struct Shape)*n);


    for(i = 0; i < n; i++)
    {
        scanf("%d", &s[i].type);
        if(s[i].type == TRIANGLE)
        {
            printf("밑변 높이 입력 : ");
            scanf("%d %d", &s[i].shape.t.base, &s[i].shape.t.height);
        }
        else if(s[i].type == CIRCLE)
        {
            printf("반지름 입력 : ");
            scanf("%d", &s[i].shape.c.radius);
        }
        else if(s[i].type == RECTANGLE)
        {
            printf("밑변 높이 입력 : ");
            scanf("%d %d", &s[i].shape.r.width, &s[i].shape.r.height);
        }
        else
        {
            printf("오류");
        }
    }

    for(i = 0; i < n; i++)
    {
        if(s[i].type == TRIANGLE)
        {
            printf("%d 번째 도형의 넓이는 %d\n", i+1, (s[i].shape.t.base * s[i].shape.t.height) / 2);
        }
        else if(s[i].type == CIRCLE)
        {
            float pi = 3.14;
            printf("%d 번째 도형의 넓이는 %lf\n", i+1, pi * (float)s[i].shape.c.radius * (float)s[i].shape.c.radius);
        }
        else if(s[i].type == RECTANGLE)
        {
            printf("%d 번째 도형의 넓이는 %d\n", i+1, s[i].shape.r.width * s[i].shape.r.height);
        }
    }

    return 0;
}
