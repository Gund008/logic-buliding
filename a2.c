#include<stdio.h>

int  countcapital(char *str)
{
  int icnt=0;

while(*str!='\0')
{
if((*str>=65)&&(*str<=90))
{
  icnt++;
}
str++;
}
return icnt;
}

int main()
{
char arr[20];
int ret=0;

printf("enter string\n");
scanf("%[^'\n']s",arr);

ret=countcapital(arr);
printf( "%d\n",ret);

   return 0;
}
