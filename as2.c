#include<stdio.h>
void pattern(int ino1,int ino2)
{
int i=0;  
int j=0;

for(i=1;i<=ino1;i++)
{
 for(j=1;j<=ino1;j++)
{
if(i==j)
{
  printf("%d\n",i);
}
else
{
 printf("%d\t",i);
}

}
}
}

  
int main()
{                                                                  
int ivalue1=0;
int  ivalue2=0;
printf("enter the number of row \n");
scanf("%d",&ivalue1);
printf("enter the number of columns \n");
scanf("%d",&ivalue1);

pattern(ivalue1,ivalue2);

 return 0;
}
