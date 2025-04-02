class System_class
{
	public static void main(String [] s)
	{
	String []arr1={"a","k","a","s","h"};
	String []arr2={"p","r","i","y","a"};
	System.arraycopy(arr1, 0, arr2, 0, arr1.length);
	int i;
	for(i=0;i<5;i++)
	{
	System.out.println("Array1 position"+i+"value"+arr1[i]);
	System.out.println("Array2 position"+i+"value"+arr2[i]);
	}
}
}

	