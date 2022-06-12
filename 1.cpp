import java.lang.*;

class pattern
{
  private int ino1;
 private int ino2;

public pattern(int a,int b)
{
 ino1=a;
ino2=b;
}

public int addtion()
{
 int ans=0;
 ans=ino1+ino2;
return ans;
}
}

class program1
{
 public static void main(String arg[])
{
int ret=0;
 pattern obj=new pattern(10,20);
ret=obj.addtion();
System.out.println("addtion is:"+ret);
return 0;
}
