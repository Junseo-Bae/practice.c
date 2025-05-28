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

void delete_node(struct Node* node)
{
    free(node->data);
    free(node);
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
    struct Node* t = q->head;
    strcpy(temp , q->head->data);
    q->head = q->head->next;
    delete_node(t);
}

void clear_queue(struct queue* q)
{
    struct Node* temp;
    while(q->head != NULL)
    {
        temp = q->head;
        q->head = q->head->next;
        free(temp->data);
        free(temp);
    }
    q->tail = NULL;
}

void print_queue(struct queue* q)
{
    struct Node* temp = q->head;
    while(temp != NULL)
    {
        printf("%s ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    struct queue q;
    char temp[100];
    
    init_queue(&q);
    
    enqueue(&q, "hello");
    enqueue(&q, "world");
    enqueue(&q, "nice");
    
    dequeue(&q, temp);
    
    printf("%s ", temp);
    
    return 0;
}
