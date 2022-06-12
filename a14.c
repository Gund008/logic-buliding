#include<stdio.h>
void pattern(int ino1,int ino2)
{
  int icnt=0;
 int  jcnt=0;
char ch='\0';


for(icnt=1;icnt<=ino1;icnt++)
{
for(jcnt=1,ch='A';jcnt<=ino2;jcnt++,ch++)
{
 printf("%c\t",ch);
}
printf("\n");

}
}
  
int main()
{
int ivalue1;
int ivalue2;

printf("enter the number of row\n");
scanf("%d",&ivalue1);

printf("enter the number of column\n");
scanf("%d",&ivalue2);

pattern(ivalue1,ivalue2);

 return 0;
}
