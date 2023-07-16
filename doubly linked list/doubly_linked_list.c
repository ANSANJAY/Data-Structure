#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *prev;
    int data;
    struct node *next;
};
void insertatbeg(int,struct node **);


int main()
{
    struct node *head,*middle,*last;
    head = malloc(sizeof(struct node));
    middle = malloc(sizeof(struct node));
    last = malloc(sizeof(struct node));


    head->data=10;
    middle->data=20;
    last->data=30;

    head->prev=NULL ;
    head->next= middle ;
    middle->prev= head ;
    middle->next=last ;
    last->prev=  middle;
    last->next=NULL ;

    insertatbeg(40,&head);

    struct node *temp;
    temp = head;
    while(temp!=NULL)
    {
        printf("node data is : %d\n",temp->data);
        temp = temp->next;
    }
}

void insertatbeg(int val,struct node **head)
{
    struct node * NewNode = malloc(sizeof(struct node));
    NewNode->data=val;
    if ((*head)==NULL)
    {
        NewNode->prev=NULL;
        NewNode->next=NULL;
        *head=NewNode;
    }
    else
    {
        NewNode->prev=NULL;
        NewNode->next=*head;
        (*head)->prev=NewNode;
        *head=NewNode;
    }

}