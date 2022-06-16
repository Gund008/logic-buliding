#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef char BOOL;

BOOL chkspecial(char ch)
{
   while(ch!='\0')
  {
     if((ch=='!')||(ch=='@')||(ch=='#')||(ch=='$')||(ch=='%')||(ch=='^')||(ch=='&')||(ch=='*'))

      {
         return TRUE;
       }
   else 
      {
           return FALSE;
       }
   }
}
          
int main()
{
    char cvalue='\0';
    BOOL bret=FALSE;
    printf("enter chracter\n");
    scanf("%c",&cvalue);
    bret=chkspecial(cvalue);
if(bret==TRUE)
{
  printf("it is special chracter");
}
else
{
   printf("it is not a special chracter");
}


   return 0;
}
