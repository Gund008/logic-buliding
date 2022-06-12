#include<stdio.h>
#include<stdbool.h>

int countfactor(int ino)
{
 int icnt=0;
 int factcnt=0;
for(icnt=2;icnt<=ino/2;icnt++)
{
 if(ino%icnt==0)
{
factcnt++;
}
}
return factcnt;

}



int main()
{
 int ivalue=0;
bool ret;

printf("enter number\n");
scanf("%d",&ivalue);

ret=countfactor(ivalue);
printf("number of factor are:%d\n",ret);

return 0;
}
