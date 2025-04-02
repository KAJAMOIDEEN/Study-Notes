
class stat
{
	private static final String name="john";
	private static final String company="dun";
	private int age=50;
	public static class out
	{
		void welcome()
		{
		System.out.println("welcome to aptech");
		System.out.println(name+company);
		}
	}
}
public class staticnesteddemo
{
	static class statinn1
	{
		void desc()
		{
		System.out.println("Aptech limited");
		}
		public static void main(String args[])
		{
		stat.out n=new stat.out();
		n.welcome();
		statinn objstat =new statinn();
		objstat.desc();
		}
	}
}

