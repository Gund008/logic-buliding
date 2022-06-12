import java.lang.*;
import java.util.*;

class xyz
{
 public static void main(String arg[])
{
Scanner sobj=new Scanner(System.in);
int ret=0;
int isize=0;
 
System.out.println("enter the value of constructor");
sobj.isize.nextInt();

  ArrayX obj=new ArrayX(isize);
obj.accept();
obj.display();

ret=obj.summation();
System.out.println("addtion is :"+ret);
obj=null;

}
}


class ArrayX
{

 private int arr[];

public ArrayX(int iNo)//parametrised 
{
 Arr=new int[iNo];
}

public void accept()
{
 int icnt=0;
 Scanner sobj=new Scanner(System.in);
 arr[icnt]=sobj.nextInt();
}
}

public void display()
{
 int icnt=0;
System.out.println("elements of array are:");
for(icnt=0;icnt<arr.length;icnt++)
 {
   System.out.println(arr[icnt]);
}
}


int sumation(int arr[],int ilength)
{
 int isum=0;
int icnt=0;
for(icnt=0;icnt<ilength;icnt++)
{
 isum=isum+arr[icnt];
}
return isum;
}
}


