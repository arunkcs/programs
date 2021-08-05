#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
   int data;
   struct node *next;
   struct node *prev;
} node;

node *head = NULL;

void append_node(int data)
{
    node *temp = head;
    node *new_node = (node *) malloc(sizeof(node));
    new_node->data = data;

    if (temp == NULL)
    {
       new_node->prev = NULL;
       new_node->next = NULL;
       head = new_node;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->prev = temp;
        new_node->next = head;
    }
}

void display_dll()
{
    node *temp = head;
    while(temp != NULL)
    {
        printf("data = %d \n", temp->data);
        temp = temp->next;
    }
}

int main()
{
    append_node(1);
    append_node(2);
    display_dll();
}
