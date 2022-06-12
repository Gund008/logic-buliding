#include<stdio.h>

void pattern(int row,int col)
{
int i=0;
int j=0;
 for(i=1;i<=row;i++)
{
 for(j=1;j<=col;j++)
{
if(i==j)
{
 printf("*\t",j);
}
else
{
 printf("#\n");
}

}
}
}


int main()
{
int ivalue1=0;
int ivalue2=0;

printf("enter the  number of row\n");
scanf("%d",&ivalue1);

printf("enter the number of column\n");
scanf("%d",&ivalue2);
 

pattern(ivalue1,ivalue2);

 return 0;
}
