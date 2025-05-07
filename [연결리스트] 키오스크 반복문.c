#include <stdio.h>
#include <stdlib.h>

struct Node {
    int order;
    struct Node* next;
};

struct LinkedList {
    struct Node* first;
    struct Node* last;
};

int main()
{
    struct LinkedList ll;
    struct Node* temp;
    int i;

    ll.first = NULL;
    ll.last = NULL;

    for (i = 1; i <= 3; i++) 
    {
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->order = i;
        temp->next = NULL;

        if (ll.first == NULL)
        {
            ll.first = temp;
            ll.last = temp;
        } 
        else
        {
            ll.last->next = temp;
            ll.last = temp;
        }
    }

    temp = ll.first;
    ll.first = ll.first->next;
    free(temp);

    temp = ll.first;
    while (temp != NULL) 
    {
        printf("%d >> ", temp->order);
        temp = temp->next;
    }

    return 0;
}
