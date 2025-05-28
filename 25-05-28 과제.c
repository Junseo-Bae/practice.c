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
    strcpy(temp, data);
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
        return;
    }
    temp->next = *head;
    *head->prev = temp;
    *head = temp;
    
}

// 과제
int add_tail(Node** head, Node** tail, char* data)
{
    Node* temp = create_node(data);
    if(*head == NULL)
    {
        *head = temp;
        *tail = temp;
    }
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
    *tail->next = temp;
    *tail = temp;
}

// 과제 head부터 찾기
int add_next(Node** head, Node** tail, char* target_data, char* data)
{
    
}

// 과제 target data를 찾아서 그 앞에 넣기 tail부터 찾기
int add_before(Node** head, Node** tail, char* target_data, char* data)
{
    
}

int add_index(struct Node** head, int index, char* data)
{
    
}

void print_linkedlist(struct Node* head)
{

}

int delete_target(struct Node** head, char* target_data)
{

}

int delete_index(struct Node** head, int index)
{
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

  // 연결리스트에서 world 삭제
  delete_target(&head, &tail, "world");

  delete_index(&head, &tail, 1);

  // 전체 연결리스트 출력
  print_linkedlist(head);
  print_reverse_linkedlist(head);

    return 0;
}
