import java.util.*;
class array
{
   public static void main(String ars[])
{
   int [] arr=new int[5];
int i;
  int sum=0;
   Scanner input=new Scanner(System.in);
   for(i=0;i<arr.length;i++)
   {
     arr[i]=input.nextInt();
   }

  for(i=0;i<arr.length;i++)
{
 System.out.println(arr[i]);
  sum+=arr[i];
}

System.out.println(sum);
}
}