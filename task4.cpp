#include <stdio.h>
#include <stdlib.h>
struct Node
{
    /* data */
    int data;
    struct Node *next;
};
typedef struct Node *p_Node;
p_Node head = NULL;
p_Node CreateNote(int value)
{
    p_Node newNode;
    newNode = (p_Node)malloc(sizeof(struct Node));
    newNode->next = NULL;
    newNode->data = value;
    return newNode;
}

p_Node AddHead(p_Node head, int value)
{
    p_Node temp = CreateNote(value);
    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        head->next = NULL;
        head = temp;
    }
    return head;
}
int GetData(p_Node head, int index)
{
    int k = 0;
    p_Node p =head;
    while(p->next != NULL && k != index)
    {
        ++k;
        p = p->next;
    }
    return p->data;
}
int main()
{
    return 0;
}