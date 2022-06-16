#include<stdio.h>
void strlwer(char *str)
{

  while(*str!='\0')
{
if((*str>='A')&&(*str<='Z'))
{
*str=*str+32;
}
else if((*str>='A')&&(*str<='Z'))
{
  *str=*str-32;
}
}
}

int main()
{
char arr[20];
printf("enter string\n");
scanf("%[^'\n']s",arr);

strlwer(arr);
printf("string in lower case:",arr);
 return 0;
}
