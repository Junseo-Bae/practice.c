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

        while(tmp != NULL && tmp->exp > exp)
        {
            prev = tmp;
            tmp = tmp->next;
        }

        if(prev == NULL)
        {
            if(tmp->exp == exp)
            {
                tmp->coef = coef + tmp->coef;
                free(temp);
                if(tmp->coef == 0)
                {
                    if(tmp->prev == NULL)
                    {
                        poly = tmp->next;
                        if(poly != NULL) // 삭제할 항이 맨 앞
                        {
                            poly->prev = NULL;
                        }
                    }
                    else // 삭제할 항이 맨 앞이 아니고
                    {
                        tmp->prev->next = tmp->next;
                        if(tmp->next != NULL) // 삭제할 항 뒤에 다른 항이 있다
                        {
                            tmp->next->prev = tmp->prev;
                        }
                    }
                    free(tmp);
                }
            } else {
                temp->next = poly;
                poly->prev = temp;
                poly = temp;
            }
        }
        else
        {
            if(tmp == NULL)
            {
                prev->next = temp;
                temp->prev = prev;
            }
            else
            {
                if(tmp->exp == exp)
                {
                    tmp->coef = coef + tmp->coef;
                    free(temp);
                    if(tmp->coef == 0)
                    {
                        if(tmp->prev == NULL)
                        {
                            poly = tmp->next;
                            if(poly != NULL) // 삭제할 항이 맨 앞
                            {
                                poly->prev = NULL;
                            }
                        }
                        else // 삭제할 항이 맨 앞이 아니고
                        {
                            tmp->prev->next = tmp->next;
                            if(tmp->next != NULL) // 삭제할 항 뒤에 다른 항이 있다
                            {
                                tmp->next->prev = tmp->prev;
                            }
                        }
                        free(tmp);
                    }
                }
                else
                {
                    temp->next = tmp;
                    temp->prev = prev;
                    prev->next = temp;
                    tmp->prev = temp;
                }
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

Term* addPoly(Term* p1, Term* p2)
{
    Term* add = NULL;
    while(p1 != NULL && p2 != NULL)
    {
        if(p1->exp == p2->exp)
        {
            if(p1->coef + p2->coef != 0)
            {
                add = insertTerm(add, p1->coef + p2->coef, p1->exp);
            }
            p1 = p1->next;
            p2 = p2->next;
        }
        else if(p1->exp > p2->exp)
        {
            add = insertTerm(add, p1->coef, p1->exp);
            p1 = p1->next;
        }
        else
        {
            add = insertTerm(add, p2->coef, p2->exp);
            p2 = p2->next;
        }
    }
    while(p1 != NULL)
    {
        add = insertTerm(add, p1->coef, p1->exp);
        p1 = p1->next;
    }
    while(p2 != NULL)
    {
        add = insertTerm(add, p2->coef, p2->exp);
        p2 = p2->next;
    }
    return add;
}

Term* mulPoly(Term* p1, Term* p2)
{
    Term* mul = NULL;
    while(p1 != NULL && p2 != NULL)
    {
        p1 = p1->next;
        p2 = p2->next;
    }
}

int main()
{
    Term* poly1 = NULL;

    poly1 = insertTerm(poly1, 3, 2);
    poly1 = insertTerm(poly1, 3, 1);
    poly1 = insertTerm(poly1, 1, 0);
    poly1 = insertTerm(poly1, 7, 0);
    poly1 = insertTerm(poly1, -3, 2);

    printf("p1 : ");
    printPoly(poly1);

    Term* poly2 = NULL;

    poly2 = insertTerm(poly2, -1, 2);
    poly2 = insertTerm(poly2, -2, 0);
    poly2 = insertTerm(poly2, 5, 4);
    poly2 = insertTerm(poly2, -3, 1);

    printf("p2 : ");
    printPoly(poly2);

    Term* poly3 = addPoly(poly1, poly2);

    printf("p3 : ");
    printPoly(poly3);
    
    Term* poly4 = mulPoly(poly1, poly2);

    printf("p4 : ");
    printPoly(poly4);
    
    int result = evalPoly(poly3, 4);
    printf("p3 = %d\n", result);
    
    freePoly();
    
    // 배열로

    return 0;
}
