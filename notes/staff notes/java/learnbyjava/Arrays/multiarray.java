import java.util.*;
class multiarray
{
   public static void main(String ars[])
{
   int [][] arr=new int[3][3];
   int i,j;
   int sum=0;
   Scanner input=new Scanner(System.in);
   	for(i=0;i<3;i++)
   	{
     	for(j=0;j<3;j++)
     	{
     	arr[i][j]=input.nextInt();
   	}
	}
 for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
     {
 	System.out.println(arr[i][j]);
      }
   }	
}
}