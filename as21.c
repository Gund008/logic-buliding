#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node
{
  int data;
 struct node*next;
}
;
typedef struct node NODE;
typedef struct node*PNODE;
typedef struct node**PPNODE;

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


int firstocc(PNODE head)
{
int icnt=0;
while(head->data==30)
{
  break;
}
else
{
 icount++;
}
head=head->next;
}
return icnt;
}


void display(PNODE head)
{
  printf("element from linked list are:\n");

while(head->next!=0);
{
  printf("|%d|->",head->data);
 head=head->next;
}
printf("NULL\n");

}


int main()
{
PNODE first=NULL;
int ret=0;

insertfirst(&first,70);
insertfirst(&first,30);
insertfirst(&first,50);
insertfirst(&first,40);
insertfirst(&first,30);
insertfirst(&first,20);
insertfirst(&first,10);

display(first);
ret=firstocc(first);


return 0;
}



 
