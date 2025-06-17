#include <stdio.h>
#include <stdlib.h>

typedef struct Term {
    int coef;
    int exp;
    struct Term* prev;
    struct Term* next;
} Term;

Term* insertTerm(Term* poly, int coef, int exp)
{
    Term* temp = (Term*)malloc(sizeof(Term));
    temp->coef = coef;
    temp->exp = exp;
    temp->prev = NULL;
    temp->next = NULL;

    if(poly == NULL)
    {
        poly = temp;
    }
    else
    {
        Term* tmp = poly;
        Term* prev = NULL;

        while(tmp != NULL && tmp->exp >= exp)
        {
            prev = tmp;
            tmp = tmp->next;
        }

        if(prev == NULL)
        {
            temp->next = poly;
            poly->prev = temp;
            poly = temp;
        }
        else
        {
            temp->next = tmp;
            temp->prev = prev;
            prev->next = temp;
            if(tmp != NULL)
            {
                tmp->prev = temp;
            }
        }
    }

    return poly;
}

void printPoly(Term* poly)
{
    Term* tmp = poly;
    while(tmp != NULL)
    {
        printf("%dx^%d", tmp->coef, tmp->exp);
        if(tmp->next != NULL)
        {
            printf(" + ");
        }
        tmp = tmp->next;
    }
    printf("\n");
}

int main()
{
    Term* poly1 = NULL;

    poly1 = insertTerm(poly1, 3, 2);
    poly1 = insertTerm(poly1, 3, 1);
    poly1 = insertTerm(poly1, 1, 0);
    poly1 = insertTerm(poly1, 2, 10);
    poly1 = insertTerm(poly1, 5, 4);
    poly1 = insertTerm(poly1, 7, 0);

    printf("p1 : ");
    printPoly(poly1);

    return 0;
}
