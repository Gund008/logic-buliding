#include<stdio.h>

void display(float fmarks)
{
 if((fmarks>0.0)&&(fmarks<35.0))
{
 printf("you are fail\n");
}
else if((fmarks>=35.0)&&(fmarks<50.0))
{
  printf("pass class\n");
}
else if((fmarks>=50.0)&&(fmarks<60.0))
{
 printf("second class\n");
}
else if((fmarks>=60.0)&&(fmarks<70.0))
{
  printf("first class\n");
}
else if((fmarks>=70.0)&&(fmarks<=100.0))
{
 printf("first class with distinction\n");
}
else
{
 printf("invalid marks\n");
}
}

int main()
{
float fvalue=0.0;
printf("enter the percentege\n");
scanf("%d",&fvalue);

display(fvalue);

 return 0;
}
