class Runtime_class
{
	public static void main(String []s)
	{
	Runtime r=Runtime.getRuntime();
	System.out.println(r.freeMemory());
	System.out.println(r.totalMemory());
	System.out.println(r.maxMemory());
	//System.out.println(r.gc());
	}
}
