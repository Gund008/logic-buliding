#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
 int data;
struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;

class singly_linkedList
{
 private:
PNODE head;

public:
singly_linkedList();
~singly_linkedList();
BOOL insertfirst(int);
BOOL insertlast(int);
BOOL insertAtPosition(int,int);
inline void display();
inline void count();
BOOL deletefirst();
BOOL deleteAtposition(int);
BOOL deletelast();
};

singly_linkedList::singly_linkedList()
{
 head=NULL;
}

singly_linkedList::singly_linkedList()
{
 PNODE temp,navigate;
if(head!=NULL)
{
 navigate=head;
while(navigate!=NULL)
{
 temp=navigate->next;
delete navigate;
navigate=temp;
}
}
}

BOOL singly_linkedList::insertFirst(int no)
{


}
BOOL singly_linkedList::insertLast(int no)
{



}
BOOL singly_linkedList::insertAtpos()
{



}

BOOL singly_linkedList::deletefirst()
{


}
BOOL singly_linkedList::deletelast()
{


}
BOOL singly_linkedList::deleteAtpos()
{


}
void singly_linkedList::display()
{



}
void singly_linkedList::count()
{


}
int main()
{


return 0;
}
