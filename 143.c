#include<iostream>
using namespace std;
class ArrayX
{
  private:
   int *Arr;
   int iSize;

 public:
{
  ArrayX(int ivalue)
  {
    this->iSize=ivalue;
    arr=new int [iSize];
}
~ArrayX()
{
  delete[]Arr;
}
void accept()
{
 int icnt=0;
 cout<<"enter the element"<<endl;
 for(icnt=0;icnt<iSize;icnt++)
{
  cin>>Arr[icnt];
}
}
int summation()
{
  int isum=0,icnt=0;

for(icnt=0;icnt<isize;icnt++)
{
  isum=isum+arr[icnt];
}
return isum;
}
};


int main()
{
 return 0;
}
