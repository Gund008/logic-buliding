//template for n number in oop


#include<iostream>

using namespace std;


class Number
{
 private:
 int ino;

public:
void Accept()
{
cout<<"enter the value:"<<endl;
cin>>this->ino;
}
void display()
{
cout<<"value is:"<<this->ino<<endl;
}

int summation()
{
 int icnt=0;
int sum=0;

for(icnt=0;icnt<=ino;icnt++)
{
 sum=sum+icnt;
}
return sum;
}
};



int main()
{
 Number obj;
int ret=0;

obj.Accept();
obj.display();

ret=obj.summation();
cout<<"addtion is:"<<ret;

return 0;
}