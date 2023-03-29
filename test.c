#include "liste.h"
/*
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
*/


int main()
{
    Node *f;
    f=NULL;
    int t,i;

    for (i=0; i<5; i++)
    {
        scanf("%d",&t);
        AddWithTime(&f,t);
        addAtEnd(&f,t);
    }
    display (f);
    addFunctionAt(&f,3,5);
    display(f);
}
