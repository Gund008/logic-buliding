import java.lang.*;
import java.util.*;

class program3
{
 public static void main(String arg[])
{
int ret=0;
  Number obj=new Number();
 obj.Accept();
ret=obj.addtion();

 obj.display();

}
}


class Number
{
 private int ino1;
 private int ino2;

 public void Accept()
{
 Scanner sobj=new Scanner(System.in);
System.out.println("enter first number:");
this.ino1=sobj.nextInt();

System.out.println("enter second number:");
this.ino2=sobj.nextInt();
}


public int addtion()
{

  int ans=0;
ans=ino1+ino2;
return ans;
}

public void display()
{
int iret=0;
 System.out.println("addtion is:"+iret);
}
}




