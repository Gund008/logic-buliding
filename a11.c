#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int maximum(int arr[],int length)
{
int i=0;
for(i=0;i<length;i++)
{
 if(length>arr[i])
{
  printf("%d\n",i);
} 
}
return 0;
}




int main()
{
int size=0;
int ret=0;
int icnt=0;
int ivalue=0;
int *p=NULL;

printf("enter number of elements:\n");//4
scanf("%d",&size);

printf("enter the number\n");//11,12,13,14,15
scanf("%d",&ivalue);

p=(int*)malloc(size*sizeof(int));
               //4*4=16byte
if(p==NULL)
{  
 printf("unable to allocate memory");
 return -1;
}
printf("enter %d elements\n",size);
for(icnt=0;icnt<size;icnt++)
{
  printf("enter element:%d",icnt+1);
 scanf("%d",&p[icnt]);
}
ret=maximum(p,size);
printf("largest number is %d",ret);
free(p);
return 0;
}


