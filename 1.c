#include<iostream>
using namespace std;

class pattern
{
 private:
int ino1;
int ino2;

pattern(int a,int b)
{
 ino1=a;
ino2=b;
}
int addtion()
{
 int ans=0;
 ans=ino1+ino2;
return ans;
}
};


int main()
{
int ret=0;

pattern obj(10,20);
ret=obj.addtion();

 return 0;
}

