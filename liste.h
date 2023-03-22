#include <stdlib.h>
#include <stdio.h>

typedef int Data;

struct Node{
	Data val;
    struct Node *next;
};

typedef struct Node Node;

void addAtBeginning(Node **head, Data v);

void addAtEnd(Node** head, Data v);

void display(Node *head);

void MakeTimp(Node **head);
