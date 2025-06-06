#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _Node {
	char* data;
	struct _Node* prev;
	struct _Node* next;
} Node;

Node* create_node(char* data)
{
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = (char*)malloc(strlen(data)+1);
    strcpy(temp->data, data);
    temp->prev = NULL;
    temp->next = NULL;
    return temp;
}

void delete_node(Node* node)
{
    free(node->data);
    free(node);
}

void delete_all(struct Node* head)
{

}

int add_head(Node** head, Node** tail, char* data)
{
    Node* temp = create_node(data);
    if(*head == NULL)
    {
        *head = temp;
        *tail = temp;
        return 1;
    }
    temp->next = *head;
    (*head)->prev = temp;
    *head = temp;
    return 1;
}

int add_tail(Node** head, Node** tail, char* data)
{
    Node* temp = create_node(data);
    if(*head == NULL)
    {
        *head = temp;
        *tail = temp;
    }
    Node* tmp = *head;
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = temp;
    temp->prev = tmp;
    *tail = temp;
}

int add_tail_fast(Node** head, Node** tail, char* data)
{
    Node* temp = create_node(data);
    if(*tail == NULL)
    {
        *tail = temp;
        *head = temp;
        return;
    }
    temp->prev = *tail;
    (*tail)->next = temp;
    *tail = temp;
}

int add_next(Node** head, Node** tail, char* target_data, char* data)
{
    Node* temp = *head;

    while(temp != NULL)
    {
        if(strcmp(temp->data, target_data) == 0)
        {
            Node* tmp = create_node(data);

            tmp->prev = temp;
            tmp->next = temp->next;

            if(temp->next != NULL)
            {
                temp->next->prev = tmp;
            }

            temp->next = tmp;

            return 1;
        }

        temp = temp->next;
    }

    return 0;
}

int add_before(Node** head, Node** tail, char* target_data, char* data)
{
    Node* temp = *tail;

    while(temp != NULL)
    {
        if(strcmp(temp->data, target_data) == 0)
        {
            Node* tmp = create_node(data);
            tmp->next = temp;
            tmp->prev = temp->prev;

            if(temp->prev != NULL)
            {
                temp->prev->next = tmp;
            }
            temp->prev = tmp;
            return 1;
        }
        temp = temp->prev;
    }
    return 0;
}

int add_index(Node** head, Node** tail, int index, char* data)
{
    Node* temp = *head;
    int i;

    for(i = 0; i < index; i++)
    {
        temp = temp->next;
        if(temp == NULL)
        {
            break;
        }
    }
    if(temp == NULL)
    {
        if(index == 0)
        {
            return add_head(head, tail, data);
        }
        if(i == index-1)
        {
            return add_tail_fast(head, tail, data);
        }
        return 0;
    }
    if(index == 0)
    {
        return add_head(head, tail, data);
    }
    Node* tmp = create_node(data);
    tmp->next = temp;
    tmp->prev = temp->prev;
    if(temp->prev != NULL)
    {
        temp->prev->next = tmp;
    }
    temp->prev = tmp;
    return 1;
}

void print_linkedlist(Node* head)
{
    while(head != NULL)
    {
        printf("%s >> ", head->data);
        head = head->next;
    }
}

void printf_reverse_linkedlist(Node* head)
{
    while(head->next != NULL)
    {
        head = head->next;
    }
    while(head != NULL)
    {
        printf("%s >> ", head->data);
        head = head->prev;
    }
}

void printf_from_tail(Node* tail)
{
    while(tail != NULL)
    {
        printf("%s >> ", tail->data);
        tail = tail->prev;
    }
}

int delete_target(Node** head, Node** tail, char* target_data)
{
    Node* temp = *head;
    while(temp != NULL)
    {
        if(strcmp(temp->next, target_data) == 0)
        {
            if(temp->next == NULL && temp->prev == NULL)
            {
                *head = NULL;
                *tail = NULL;
            }
            else
            {
                if(temp->prev != NULL)
                {
                    temp->prev->next = temp->next;
                }
                else
                {
                    *head = temp->next;
                }
                if(temp->next != NULL)
                {
                    temp->next->prev = temp->prev;
                }
                else
                {
                    *tail = temp->prev;
                }
            }
            delete_node(temp);
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

// 과제 - index 해당하는 노드를 삭제
int delete_index(Node** head, Node** tail, int index)
{
}

// 과제 - index에 해당하는 노드를 tail부터 찾아서 반환
Node* get_node_index_tail(Node** head, Node** tail, int index)
{
}

void reverse_list(Node** head, Node** tail)
{
    Node* temp = *head;
    *head = *tail;
    *tail = temp;

    temp = *tail;

    while(temp != NULL)
    {
        Node* tmp = temp->prev;
        temp->prev = temp->next;
        temp->next = tmp;
        temp = temp->prev;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    add_head(&head, &tail, "hello");


    // 연결리스트의 맨 뒤에 world 추가
    add_tail(&head, &tail, "world");

    add_tail_fast(&head, &tail, "nice");


    // 연결리스트의 hello 뒤에 good 추가
    add_next(&head, &tail, "hello", "good");

    add_before(&head, &tail, "good", "very good");


    // 연결리스트의 2번째 뒤에 bad 추가
    add_index(&head, &tail,  2, "bad");
    add_index(&head, &tail,  10, "too bad");

    // 연결리스트에서 world 삭제
    delete_target(&head, &tail, "world");

    //delete_index(&head, &tail, 1);

    //Node* found = get_node_index_tail(&head, &tail, 1);
    //printf("find node : %s\n", found->data);

    // 전체 연결리스트 출력
    print_linkedlist(head);
    printf("\n");
    printf_reverse_linkedlist(head);
    printf("\n");
    printf_from_tail(tail);
    printf("\n");

    reverse_list(&head, &tail);
    print_linkedlist(head);

    //delete_all(head);

    return 0;
}
