import java.lang.*;
class abd
{
 public static void main(String arg[])
{
xyt obj=new xyt(4,4);
obj.display();

 }
}

class xyt
{
 private int ino1;
 private int ino2;

public xyt(int a,int b)
{
 ino1=a;
ino2=b;
}
void display()
{
 int i=0;
 int j=0;
for(i=0;i<=ino1;i++)
{
 for(j=0;j<=ino2;j++)
{
 System.out.print("*\t");
}
System.out.println();
}
}
}

