#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};
void insertatbeg(int,struct node **);
void insertatend(int,struct node**);
void delete(int,struct node**);
int searchnode(int,struct node **);



int main(){
int res;
struct node *head,*middle,*last;
head = malloc(sizeof(struct node));
middle = malloc(sizeof(struct node));
last = malloc(sizeof(struct node));

head->data=10;
middle->data=20;
last->data=30;

head->next=middle;
middle->next=last;
last->next=NULL;



insertatbeg(40,&head);
insertatbeg(50,&head);
insertatbeg(60,&head);
insertatend(70,&head);
delete(50,&head);
res=searchnode(70,&head);
if(res==1)
printf("key found\n");
else
printf("key not found\n");



struct node *temp;
temp=head;
while(temp!=NULL)
{
printf("%d\n",temp->data);
temp = temp->next;
}
return 0;
}


void insertatbeg(int val,struct node ** head){
struct node* NewNode= malloc(sizeof(struct node));
NewNode->data=val;
NewNode->next=*head;
*head=NewNode;

}

 void insertatend(int val,struct node ** head)
 {
    struct node* temp = *head; 
    struct node* lastnode = malloc(sizeof(struct node));
    lastnode->data=val;
    lastnode->next=NULL;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next=lastnode;
}

 void delete(int val,struct node ** head)
{
    struct node * temp = *head;
    if((*head)->data == val )
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }

    struct node *current = *head;
    while(current != NULL){
    if (current->next->data != val)
    {
        current=current->next;
    }
    temp = current->next;
    current->next = current->next->next;
    free(temp);
    break;
    }
}

 int searchnode(int val,struct node ** head)
{
    struct node * temp = *head;
   while(temp!= NULL)
   {
    if(temp->data==val)
    return 1;
    temp=temp->next;
   }
   return -1;
}