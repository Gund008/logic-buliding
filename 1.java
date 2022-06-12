import java.lang.*;
import java.util.*;

class xyz
{
 public static void main(String arg[])
{
 int ret=0;
addtion obj=new addtion(10,22);

ret=obj.display();
System.out.println("addtion is :"+ret);


}

class addtion
{
private int ino1;
private int ino2;

public addtion(int a,int b)
{
ino1=a;
ino2=b;
}

int display()
{
 int ans=0;
ans=ino1+ino2;
return ans;
}
}

}
