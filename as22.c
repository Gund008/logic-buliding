#include<stdio.h>
#include<stdlib.h>
#define TRUE 1;
#define FALSE 0;



struct node
{
 int data;
 struct node *next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;
void insertfirst(PPNODE head,int no)
{
  PNODE newn=NULL;
newn=(PNODE)malloc(sizeof(NODE));

newn->next=NULL;
newn->data=no;

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


void perfect(PNODE head)
{

int i=0;
int icnt=0;

printf("the perfect number are:%d\n");

while(head!=NULL)
{
int isum=0;
for(i=1;i<head->data;i++)
{
if((head->data)%i==0)
{
 isum=isum+i;
}
}
if(head->data==isum)
{
 printf("%d\n",head->data);
}
head=head->next;
}
}

void display(PNODE head)
{
  printf("enter the element of linked list\n");
 while(head!=NULL)
{
 printf("|%d|->",head->data);
head=head->next;
}
printf("NULL\n");
}




int main()
{

 PNODE first=NULL;
 //int ret=0;

//insertfirst(&first,70);
//insertfirst(&first,30);
//insertfirst(&first,50);
insertfirst(&first,10);
insertfirst(&first,230);
insertfirst(&first,320);
insertfirst(&first,240);

perfect(first);

display(first);

return 0;
}



