// program for Exception Handling - Throw & Throws

class throwDemo
{
void demopoc()
	{
		try
		{
		throw new NullPointerException("demo");
		}

		catch(NullPointerException e)
		{
			System.out.println("Caught Inside Demopro");
			throw e;
		}
	}

	public static void main(String ar[])
	{
		try
		{
			demoproc();
		}
		catch(NullPointerException e)
		{
			System.out.println("Recaught "+e);
		}
	}
}