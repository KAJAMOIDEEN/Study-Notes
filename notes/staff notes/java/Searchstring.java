class Searchstring
{
	protected Searchstring()
	{
	}
	public static void main(final String [] args)
	{
		String name="Aptech computer Education";
		System.out.println("name is "+name);
		System.out.println("Index of c is");	
		System.out.println(name.indexOf('c'));
		System.out.println("Index of E is");
		System.out.println(name.indexOf('E'));
	if(name.indexOf('h')>name.indexOf('n'))
	{
		System.out.println("The name is valid");
	}
	else
	{
		System.out.println("The name is invalid");
	}
}
}

	