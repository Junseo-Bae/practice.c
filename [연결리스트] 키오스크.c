#include <stdio.h>
#include <stdlib.h>

struct Node* {
    int ourder;
    struct Node* next;
};

struct LinkedList {
    struct Node* first;
    struct Node* last;
};

int main()
{
    int i;

    struct LinkedList ll; //16 byte
    struct Node* temp;

    ll.first = null;
    ll.last = null;

    // first order
    temp = (struct Node*)malloc(sizeof(struct Node)*1)
    temp->order = 1; //(*temp).order
    temp->next = null;

    ll.first = temp;
    ll.last = temp;

    // second order
    temp = (struct Node*)malloc(sizeof(struct Node)*1)
    temp->order = 2;
    temp->next = null;

    ll.last = temp;
    ll.first->next = temp;

    // third order
    temp = (struct Node*)malloc(sizeof(struct Node)*1)
    temp->order = 3;
    temp->next = null;

    ll.last->next = temp;
    ll.last = temp;

    // del first
    temp = ll.first;
    ll.first = ll.first->next;
    free(temp);

    // print order
    temp = ll.first;
    while(temp != null)
    {
        printf("%d >> ", temp->order);
        temp = temp->next;
    }

    return 0;
}
