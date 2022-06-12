#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool searchfirstoccurence(int arr[],int ilength,int ino)
{
 int icnt=0;
for(icnt=0;icnt<ilength;icnt++)
{
 if(arr[icnt]==ino)
{
break;
}
if(ino==ilength )
{
 return true;
}
else
{
 return false;
}
}
}


int main()
{
int size=0;
int *ptr=NULL;

bool bret;
int icnt=0;
int value=0;


printf("enter the number  of elements\n");
scanf("%d",&size);

ptr=(int*)malloc(size*sizeof(int));

printf("enter the number of array elements:\n");
for(icnt=0;icnt<size;icnt++)
{
  scanf("%d",&ptr[icnt]);
}
printf("enetr the element to search\n");
scanf("%d",&value);

bret=searchfirstoccurence(ptr,size,value);//jyane call kela aahe tyala return kra

if(bret==true)
{
 printf(" thier is no such element in array \n");
}
else
{
  printf("element first occured at:%d\n",bret);
}
free(ptr);
return 0;
}


 
