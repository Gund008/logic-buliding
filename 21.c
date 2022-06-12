#include<stdio.h>
#include<stdlib.h>


struct node
{
  int data;//4
  struct node *next;//8
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Insertfirst(PPNODE head,int no)
{
  PNODE newn=NULL;
 newn=(PNODE)malloc(sizeof(NODE));
 
newn->data=no;
newn->next=NULL;

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

void Insertlast(PPNODE head,int no)
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


int count(PNODE head)
{
int icnt=0;
while(head!=NULL);
{
 icnt++;
head=head->next;
}
return icnt;
}

void Deletefirst(PPNODE head)
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

void Deletelast(PPNODE head)
{
PNODE temp=NULL;
if(*head==NULL)
{
 return;
}
else if((*head)->next==NULL)
{
free(*head);
*head=NULL;
}
else
{
 temp=*head;
while(temp->next->next!=NULL)
{
 temp=temp->next;
}
free(temp->next);
temp->next=NULL;
}
}



void InsertAtPosition()
{
int size=0;
int icnt=0;
PNODE newn=NULL;
PNODE temp=NULL;

size=count(*head);
if((pos<1)||(pos>(size+1)))
{
 printf("postion is invalid\n");
return ;
}
if(pos==1)
{
 Insertfirst(head,no);
}
else if(pos==(size+1))
{
 Insertlast(head,no);
}
else
{
newn=NULL;
newn=(PNODE)malloc(sizeof(NODE));
newn=(PNODE)malloc(sizeof(NODE));

newn->data=no;
newn->next=NULL;
temp=*head;

for(icnt=1licnt<pos-1;icnt++)
{
 temp=temp->next;
}

newn->next=temp->next;
temp->next=newn;
}
}


}
void DeleteAtPosition()
{



}


int main()
{
PNODE first=NULL;
int ret=0;

Insertfirst(&first,101);
Insertfirst(&first,51);
Insertfirst(&first,21);
Insertfirst(&first,11);

display(first);

ret=count(first);
printf("number of nodes are:%d\n",ret);

//Inserfirst(&first,1);
display(first);
ret=count(first);
printf("number of nodes are:%d\n",ret);

Insertlast(&first,111);
Insertlast(&first,121);

display(first);
ret=count(first);
printf("number of nodes are:%d\n",ret);

Deletefirst(&first);
display(first);
ret=count(first);
printf("number of nodes are:%d\n",ret);


Deletelast(&first);
display(first);
ret=count(first);
printf("number of nodes are:%d\n",ret);

return 0;
}



