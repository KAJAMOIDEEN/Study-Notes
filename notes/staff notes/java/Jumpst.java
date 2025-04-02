class Jumpst
{
public static void main(String ars[])
{
  int count,square,cube;
    for(count=1;count<=10;count++)
	{
	if(count%3==0)
	continue;
	square=count*count;
	cube=count*count*count;
	System.out.printf("\n square of %d is %d and cube is %d",count,square,cube);
	}
}
}


