#include<stdio.h>
#include<stdlib.h>
int summation(int arr[],int isize)
{
  int isum=0,icnt=0;
for(icnt=0;icnt<isize;icnt++)
{
  isum=isum+arr[icnt];
}
return isum;
}

int main()
{
int isize=0;
int *ptr=NULL;
int icnt=0;
int iret=0;

printf("enter the number of element\n");
scanf("%d",&isize);

ptr=(int*)malloc(sizeof(int)*isize);

printf("enter the values of array\n");

for(icnt=0;icnt<isize;icnt++)
{
 scanf("%d",&ptr[icnt]);
}
iret=summation(ptr,isize);
printf("summation is:%d\n",iret);


 return 0;
}
