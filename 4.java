import java.lang.*;
import java.util.*;

class program4
{
 public static void main(String arg[])
{
int ret=0;

 number obj=new number(5);
 obj.accept();
 obj.display();
ret=obj.summation();
System.out.println("summation is:"+ret);

}
}

class number
{
 private int arr[];

public number(int no)
{
 arr=new int[no];
}

public void accept()
{
int icnt=0;

Scanner sobj=new Scanner(System.in);
System.out.println("enter the number of array:");
for(icnt=0;icnt<arr.length;icnt++)
{
   arr[icnt]=sobj.nextInt();
}
}

public  void display()
{
int icnt=0;
System.out.println("enter the number of array element:");
for(icnt=0;icnt<arr.length;icnt++)
{
 System.out.println(arr[icnt]);
}
}

int summation()
{
 int icnt=0;
int sum=0;

for(icnt=0;icnt<arr.length;icnt++)
{
  sum=sum+icnt;
}
return sum;
}
}


