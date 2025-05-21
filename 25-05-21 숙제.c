#include <stdio.h>
#include <stdlib.h>

struct Node {
    char* data;
    struct Node* next;
};

struct queue {
    struct Node* head;
    struct Node* tail;
};

struct Node* create_node(char* data)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = (char*)malloc(strlen(data)+1);
    strcpy(temp->data, data);
    temp->next = NULL;
    return temp;
}

void init_queue(struct queue* q)
{
    q->head = NULL;
    q->tail = NULL;
}

void enqueue(struct queue* q, char* data)
{
    struct Node* temp = create_node(data);
    if(q->head == NULL)
    {
        q->head = temp;
    }
    
    if(q->tail != NULL)
    {
        q->tail->next = temp;
    }
    q->tail = temp;
}

void dequeue(struct queue* q, char* temp)
{
    if(q->head == NULL)
    {
        temp[0] = '\0';
        return;
    }
    strcpy(temp ,q->head->data);
    q->head = q->head->next;
}

void clear_queue(struct queue* q)
{
    
}

void print_queue(struct queue* q)
{
    
}

int main()
{
    struct queue q;
    char temp[100];
    
    init_queue(&q);
    
    enqueue(&q, "hello");
    enqueue(&q, "wolrd");
    enqueue(&q, "nice");
    
    dequeue(&q, temp);
    printf("%s ", temp);
    
    return 0;
}
