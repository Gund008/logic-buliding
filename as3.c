#include<stdio.h>
void pattern(int ino1,int ino2)
{
   int i=0;
int j=0;
//char ch='\0';

for(i=ino1;i>=1;i--)
{
 for(j=ino1;j>=1;j--)
{
  printf("%d\t",i);
}
printf("%d\n",i);
}
}

int main()
{
int ivalue1=0;
int ivalue2=0;
printf("enter the number of rows\n");
scanf("%d",&ivalue1);

printf("enter the number of columns\n");
scanf("%d",&ivalue2);

pattern(ivalue1,ivalue2);

 return 0;
}
