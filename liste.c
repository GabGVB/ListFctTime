#include "liste.h"

void addAtBeginning(Node **head, Data v)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->val = v;
    newNode->next = *head;
    *head = newNode;
}

void addAtEnd(Node** head, Data v)
{
    Node *aux=*head;
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->val = v;
    if (*head == NULL) addAtBeginning(&*head, v);
    else
    {
        while (aux->next!=NULL) aux = aux->next;
        aux->next = newNode;
        newNode->next = NULL;
    }
}

void display(Node *head)
{
    while (head!=NULL)
    {
        printf ("%d ", head->val);
        head=head->next;
    }
    printf("\n");
}
void modification (Node **head,int k)
{
    int i=0;
    Node *aux=*head;
    while (aux!=NULL&&i<k)
    {
        i++;
        aux=aux->next;
    }
    if (aux!=NULL)
        aux->val=10;

}

void addFunctionAt (Node **head,int k,int t)
{
    Node *aux =*head;
    int i=1;
    while (i<k-1)
    {
        aux->val+=t;
        aux=aux->next;
        i++;
    }
    aux->val+=t;
    Node *NewNode;
    NewNode=(Node*)malloc(sizeof(Node));
    NewNode->next=aux->next;
    NewNode->val=t;
    aux->next=NewNode;
    NewNode->val+=NewNode->next->val;
}

void AddWithTime (Node **head,int k)
{
    Node *aux=*head;
    while (aux!=NULL)
    {
        aux->val+=k;
        aux=aux->next;
    }
}

