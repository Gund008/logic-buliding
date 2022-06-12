#include<stdio.h>
int display(int row,int col)
{
  int i=0;
int j=0;

for(i=1;i<=row;i++)
{
  for(j=1;j<=col;j++)
{
  printf("*\t");
}
}
return 0;
}

int main()
{
int ivalue1;
int ivalue2;
int ret=0;
printf("enter the no of row");
scanf("%d",&ivalue1);

printf("enter the no of col");
scanf("%d",&ivalue2);

ret=display(ivalue1,ivalue2);
printf("pattern return is:%d\n",ret);

  return 0;
}


