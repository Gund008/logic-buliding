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
 this->cols=b;
}

void displaypattern()
{
  int i=0;
 int j=0;
 for(i=1;i<=row;i++)
{
 for(j=1;j<=cols;j++)
{
  cout<<"*"<<"\t";
}

cout<<endl;
}
}
};

int main()
{
pattern obj(4,4);
obj.displaypattern();

}
