#include<iostream>
using namespace std;

class ArrayX
{
 private:
 int *arr;
int isize;

public:
ArrayX(int ivalue)
{
 isize=ivalue;
arr=new int[isize];
}

~ArrayX()
{
 delete[]arr;
}

void accept()
{
 int icnt=0;
cout<<"enter the elements"<<endl;
for(icnt=0;icnt<isize;icnt++)
{
 cin>>arr[icnt];
}
}

void display()
{
int icnt=0;
cout<<"Elements of array are "<<endl;
 for(icnt = 0; icnt< isize; icnt++)
     {
                
           cout<<arr[icnt]<<endl;
     
 }
}

        int Sumation()
        {
            int iSum = 0, iCnt = 0;
            //      1               2               3
            for(iCnt = 0; iCnt < isize; iCnt++)
            {
                iSum = iSum + arr[iCnt];    // 4
            }
            return iSum;
}
};

int main()
{
int ret=0;
ArrayX obj(5);

obj.accept();
obj.display();

ret=obj.Sumation();
cout<<"addition is:"<<ret<<endl;
return 0;
}

