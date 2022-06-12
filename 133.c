#include<stdio.h>
#include<stdlib.h>
 struct node
{
  int data;
  struct node* next;
};
 
typedef struct node NODE;//juna nav 
typedef struct node* PNODE;//navin nav
typedef struct node** PPNODE;



void insertfirst(PPNODE head,int ino)
{
PNODE newn=NULL;
newn=(PNODE)malloc(sizeof(NODE));//dynamic memory allocation

newn->data=ino;
newn->next=NULL;//structure data intialization

if(*head==NULL)
{
 *head=newn;
}
else
{
  newn->next=*head;
 *head=newn;
}
}
void insertlast(PPNODE head,int no)
{
  PNODE newn=NULL;
 PNODE temp=NULL;

newn=(PNODE)malloc(sizeof(NODE));

newn->data=no;
newn->next=NULL;

if(*head==NULL)
{
 *head=newn;
}
else
{
  temp=*head;
while(temp->next!=NULL)
{
 temp=temp->next;
}
temp->next=newn;
}
}


void display(PNODE head)
{
 printf("\n");
while(head!=NULL)
{
 printf("%d\t",head->data);
head=head->next;
}
printf("\n");
}

void deletefirst(PPNODE head)
{
 PNODE temp=NULL;

if(*head==NULL)
{
 return;
}
else
{
  temp=*head;
*head=temp->next;
free(temp);
}
}

void deletelast(PPNODE head)
{
 PNODE temp=NULL;

if(*head==NULL)
{
 return ;
}

if((*head)->next==NULL)
{
 free(*head);
 *head=NULL;
}
else
{
 temp=*head;
while(temp->next->next!=NULL
{
 temp=temp->next;
 }
free(temp->next);
temp->next=NULL;
}
}




int main()
{
PNODE first=NULL;
insertfirst(&first,101);
insertfirst(&first,51);
insertfirst(&first,21);
insertfirst(&first,11);

display(first);
insertlast(&first,111);
insertlast(&first,121);

display(first);

deletefirst(&first);
deletelast(&first);
display(first);

 return 0;
}
