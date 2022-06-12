#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef  int BOOL;

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
  PNODE newn =NULL;
newn=(PNODE)malloc(sizeof(NODE));

next->data=no;
next->next=NULL;

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
searchfirstocc(PNODE head,int no)
{
  
int main()
{
PNODE first=NULL;
int ret=0;

insertfirst(&first,101);
insertfirst(&first,51);
insertfirst(&first,21);
insertfirst(&first,11);


ret= searchfirstocc(first);


  

 return 0;
}
