import java.lang.*;
import java.util.*;

class xyz
{
 public static void main(String arg[])
{
  System.out.println("");
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

public int summation()
{

