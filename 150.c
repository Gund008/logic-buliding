#include<iostream>
using namespace std;

class pattern 
{
 private:
int row;
int cols;
public:
pattern(int a,int b)
{
 this->row=a;
 this->col=b;
}

void displaypattern()
{
  int i=0;
 int j=0;
 for(i=1;i<=row;i++)
{
  cout<<"*"<<"\t";
}
cout<<endl;

int main()
{
}
