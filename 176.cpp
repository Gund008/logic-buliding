#include<iostream>
using namespace std;

int  CountCapital(char str[])
{
   int icnt=0;

 while(*str!='\0')
{
   if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u')||(*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U'))
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
cout<<"number of vowels  are:"<<ret<<endl;


   return 0;
}
