import java.lang.*;
import java.util.*;
class program6
{
 public static void main(String arg[])
{
// int ret=0;

 pattern obj=new pattern(4,4);
 obj.display();

}
}

class pattern
{
 private int row;
 private int cols;

public pattern(int a,int b)
{
 row=a;
 cols=b;
}

public void display()
{
 int icnt=0;
int i=0;
int j=0;

 for(icnt=0;icnt<=row;icnt++)
{
 for(icnt=0;icnt<=cols;icnt++)
{
 System.out.print("%d",j);
}
}
}
}


