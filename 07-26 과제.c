#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

#define STACK_SIZE 4

int stack[STACK_SIZE];
int index;

int push_stack(int n)
{
    if(index > STACK_SIZE)
    {
        return 0;
    }
    else
    {
        stack[index++] = n;
    }
}

int pop_stack()
{
    if(index < 0)
    {
        printf("stack is empty");
    }
    else
    {
        return stack[--index];
    }
}

int main()
{
    push_stack(1);
    push_stack(2);
    push_stack(3);
    push_stack(4);
    if(push_stack(5) == FALSE)
    {
        printf("stack is full\n");
    }

    printf("%d\n", pop_stack());
    printf("%d\n", pop_stack());
    printf("%d\n", pop_stack());
    printf("%d\n", pop_stack());
    printf("%d\n", pop_stack());

    return 0;
}
