#include<stdio.h>

void reverse(char *str)
{
char *dest=str;
char *src=str;
char temp;



while(*dest!='\0')
{
   dest++;
}
dest--;

while(src<=dest)
{
 temp=*src;
*src=*dest;
*dest=temp;

src++;
dest--;

} 
}


int main()
{
char arr[20];

printf("enter string\n");
scanf("%[^'\n']s",arr);
 

reverse(arr);
printf("reverse character is %s\n",arr);

 return 0;
}
