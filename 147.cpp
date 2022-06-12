//template for n number of oop

#include<iostream>
using namespace std;

class ArrayX
{
 private:
int *arr=NULL;//ptr= new int[];
int size=0;



public:
ArrayX(int ivalue)
{
  this->size=ivalue;
  arr=new int[size];//new memory allocate
}
~ArrayX()
{
delete []arr;
}


void Accept()
{
int icnt=0;
cout<<"enter the elements"<<endl;
for(icnt=0;icnt<size;icnt++)
{
 cin>>arr[icnt];
}
}
void Display()
{
int icnt=0;
cout<<"elements of array are"<<endl;
for(icnt=0;icnt<size;icnt++)
{
 cout<<arr[icnt]<<endl;
}
}

int  evennumber()
{
 int icnt=0;
//int number=0;
for(icnt=1;icnt<size;icnt++)
{
 if((size%2)==0)
{
 cout<<"even number of array is:"<<endl;
}
}
return size;
}
};


int main()
{
ArrayX obj(5);
int ret=0;

obj.Accept();
obj.Display();

ret=obj.evennumber();
cout<<"even number is:"<<ret<<endl;

 return 0;
}
