#include<iostream>
using namespace std;
class ArrayX
{
  private:
   int *Arr;
   int iSize;

 public:

  ArrayX(int ivalue)
  {
    this->iSize=ivalue;
    Arr=new int [iSize];
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

 void Display()
        {
            int iCnt = 0;

            cout<<"Elements of array are "<<endl;
            for(iCnt = 0; iCnt< iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<endl;
            }
        }
int summation()
{
  int isum=0,icnt=0;

for(icnt=0;icnt<iSize;icnt++)
{
  isum=isum+Arr[icnt];
}
return isum;
 }

};


int main()
{
int ret=0;

ArrayX obj1(5);
obj1.accept();
obj1.Display();

ret=obj1.summation();
cout<<"addtion is:"<<ret<<endl;

 return 0;
}
