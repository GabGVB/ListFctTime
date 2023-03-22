#include "liste.h"
int main()
{
    Node *head;
    head=NULL;
    int i;
    int s[]={1,2,3,4,5,6};
    for (i=0;i<6;i++)
    addAtEnd(&head,s[i]);
    display(head);
    modification(&head,3);
    display(head);
    return 0;
}
