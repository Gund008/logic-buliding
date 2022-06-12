#include<stdio.h>
#include<stdlib.h>
int summation(int arr[],int length)
{
  int icnt=0;
 int sum=0;
for(icnt=0;icnt<length;icnt++)
{
 printf("%d",&arr[icnt]);
sum=sum+arr[icnt];

}
return sum;
}

int main()
{

int size=0;
int ret=0;
int icnt=0;

printf("enter number of elemens\n");
scanf("%d",&size);

int *ptr=NULL;
ptr=(int*)malloc(sizeof(int)*size);

printf("enter the element of array\n");

for(icnt=0;icnt<size;icnt++)
{
 scanf("%d",&ptr[icnt]);
}

ret=summation(ptr,size);
printf("addtion is :%d\n",ret);

free(ptr);

 return 0;
}
