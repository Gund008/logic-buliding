#include<stdio.h>
void pattern(int ino)
{
  int i=0;
  char ch='\0';
for(i=1,ch='A';i<=ino;i++,ch++)
{
  printf("%c\t",ch);
}

}

int main()
{
int ivalue;
printf("enter the number\n");
scanf("%d",&ivalue);

pattern(ivalue);

 return 0;
}
