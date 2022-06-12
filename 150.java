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
cout<<value is:"<<this->ino<<endl;


}



int main()
{
 Number obj;
obj.Accept();
obj.display();

return 0;
}