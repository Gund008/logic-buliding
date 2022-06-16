#include<stdio.h>

 int diffreance(char *str)
{
int icnt=0;
//int src=0;



while(*str!='\0')
{
 if((*str>=97) &&(*str<=122))
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

ret=diffrence(arr);
printf("diffrence between %d\n",ret);

   return 0;
}
