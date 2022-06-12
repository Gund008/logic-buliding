#include<stdio.h>
#include<stdlib.h>

int diffrence(int arr[],int length)
{
int i=0;
int imin=0;
int imax=0;
int diff=0;

for(i=0;i<length;i++)
{
if((imax<arr[i])&&(imin<arr[i]))      //API
{
  diff=imax-imin;
}
}
return diff;
}



int main()
{
//int arr=0;
int *ptr=NULL;
int size=0;
int i=0;
int ret=0;

printf("enter the number\n");
scanf("%d",&size);

ptr=(int*)malloc(size*sizeof(int));    //API brobar aahe ka cheak main

printf("enter the element of array\n");
for(i=0;i<size;i++)
{
   scanf("%d",&ptr[i]);
}
ret=diffrence(ptr,size);//(100,4)
printf("diffrence  is:%d\n",ret);

  return 0;
}
