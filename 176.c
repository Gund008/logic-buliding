#include<iostream>
using namespace std;
int CountCapital(char str[])
{
   int icnt=0;

 while(*str!='\0')
{
   if((*str>='A)&&(*str<='Z'))
{
   icnt++;
}
str++;
}
return icnt;
}

int main()
{
char Arr[20];
int ret=0;

cout<<"enter string"<<endl;
cin.getline(Arr,20);

ret=CountCapital(Arr);

   return 0;
}
