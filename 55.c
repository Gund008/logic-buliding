#include<stdio.h>
int power(int ino1,int ino2)
{
  int icnt=0;
int mult=1;

for(icnt=1;icnt<=ino2;icnt++)
{
 mult=mult*ino1;
}
return mult;
}

int main()
{
auto int ivalue1=0,ivalue2=0;
auto int iret=0;

printf("enter base:\n");
scanf("%d",&ivalue1);

printf("enter power:\n");
scanf("%d",&ivalue2);

iret=power(ivalue1,ivalue2);
printf("result is:%d\n",iret);

 return 0;
}
