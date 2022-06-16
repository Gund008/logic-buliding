#include<stdio.h>
void displayshedule(char chdiv)
{
 while(chdiv!='\0');
{
switch((chdiv=='A')||(chdiv=='B')||(chdiv=='C')||(chdiv=='D'))
{
case 'A':
printf("your exam at 9:20am");
break;

 case 'B':
printf("your exam at 8:20am");
break;

 case 'C':
printf("your exam at 7:20am");
break;

case 'D':
printf("your exam at 5:20am");
break;
}
} 
}


int main()
{
char cvalue='\0';
//bool bret=FALSE;

printf("enter your division\n");
scanf("%c",&cvalue);

displayshedule(cvalue);

 return 0;
}
