#include <stdio.h>
#include <stdlib.h>

struct queue {
    int head;
    int tail;
    char* list[100];
};

void init_queue(struct queue* q)
{
    q->head = -1;
    q->tail = -1;
    int i;
    for(i = 0; i < 100; i++)
    {
        q->list[i] = NULL;
    }
}

void enqueue(struct queue* q, char* data)
{
    if(q->head == -1)
    {
        q->head = 0;
    }

    char* temp = (char*)malloc(strlen(data)+1);
    strcpy(temp, data);

    q->list[++q->tail] = temp;
}

void dequeue(struct queue* q, char* temp)
{
    if(q->head == -1)
    {
        temp[0] = '\0';
        return;
    }

    strcpy(temp ,q->list[q->head]);
    free(q->list[q->head]);
    q->list[q->head] = NULL;
    if(q->head == q->tail)
    {
        q->head = -1;
        q->tail = -1;
    }
    else
    {
        q->head++;
    }
}

void clear_queue(struct queue* q)
{
    if(q->head == -1) return;

    int i;

    for(i = q->head; i <= q->tail; i++)
    {
        free(q->list[i]);
        q->list[i] = NULL;
    }

    q->head = -1;
    q->tail = -1;
}

void print_queue(struct queue* q)
{
    if(q->head == -1) return;

    int i;

    for(i = q->head; i <= q->tail; i++)
    {
        printf("%s >> ", q->list[i]);
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

    printf("%s\n", temp);

    print_queue(&q);
    clear_queue(&q);

    return 0;
}
