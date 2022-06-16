#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;


BOOL chkvowel(char *str)
{
while(*str!='\0')
{
 if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u'))
{
  return 1;
}
else if((*str!='a')||(*str!='e')||(*str!='i')||(*str!='o')||(*str!='u'))
{
  break;
}
str++;
}

if(*str=='\0')
{
  return TRUE;
}
else if
{
 return FALSE;
}
}


int main()
{
  char arr[20];
  BOOL ret=FALSE;

printf("enter string\n");
scanf("%[^'\n']s",arr);

ret=chkvowel(arr);
if(ret==true)
{
 printf("contains vowel");
}
else
{
 printf("thier is not vowel");
}
return 0;
}

