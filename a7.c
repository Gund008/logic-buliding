#include<stdio.h>
int countwhite(char *str)
{
  int icnt=0;
 while(*str!='\0')
{
if(*str==' ')
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

ret=countwhite(arr);
printf("number of white spaces:%d\n",ret);

  return 0;
}
