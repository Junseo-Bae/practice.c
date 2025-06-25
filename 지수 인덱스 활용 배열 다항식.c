#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_POLY 100

int poly1[MAX_POLY];
int poly2[MAX_POLY];
int add_poly[MAX_POLY];
int mul_poly[MAX_POLY];

int insertTerm(int* poly, int coef, int exp)
{
    if(exp >= MAX_POLY || exp < 0)
    {
        return -1;
    }

    poly[exp] += coef;

    return 0;
}

void printPoly(int* poly)
{
    int i, flag = 0;
    for(i = MAX_POLY-1; i >= 0; i--)
    {
        if(poly[i] != 0)
        {
            if(flag != 0)
            {
                printf(" + ");
            }
            flag = 1;
            printf("%dx^%d", poly[i], i);
        }
    }
    printf("\n");
}

void addPoly(int* add_poly, int* poly1, int* poly2)
{
    int i;
    for(i = MAX_POLY-1; i >= 0; i--)
    {
        add_poly[i] = poly1[i] + poly2[i];
    }
}

void mulPoly(int* mul_poly, int* poly1, int* poly2)
{
    int i, j;
    for(i = 0; i < MAX_POLY; i++)
    {
        if(poly1[i] != 0)
       {
           for(j = 0; j < MAX_POLY; j++)
           {
               if(poly2[j] != 0)
               {
                   insertTerm(mul_poly, poly1[i] * poly2[j], i+j);
               }
           }
       }
    }
}


int evalPoly(int* poly, int x)
{
    int result = 0;
    int i;
    for(i = 0; i < MAX_POLY; i++)
    {
        result = result + poly[i] * (int)pow(x, i);
    }
    return result;
}

int main()
{
    insertTerm(poly1, 3, 1);
    insertTerm(poly1, 2, 0);
    printPoly(poly1);

    insertTerm(poly2, 3, 1);
    insertTerm(poly2, 2, 0);
    printPoly(poly2);

    addPoly(add_poly, poly1, poly2);
    printPoly(add_poly);

    mulPoly(mul_poly, poly1, poly2);
    printPoly(mul_poly);

    int r = evalPoly(add_poly, 3);
    printf("%d", r);

    return 0;
}
// O(n) vs O(1)
