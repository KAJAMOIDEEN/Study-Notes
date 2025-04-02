class Stringmethods
{
	protected Stringmethods()
	{
	}
	public static void main(String [] args)
	{
		String str="Java is a "+"platform independent language";
		String str1=" Hello   world ";
		String str2="Hello";
		String str3="HELLO";
		String str4=str3.toString();
		System.out.println(str);
		System.out.println(" index of t="+str.indexOf('t'));
		System.out.println("last index of  t="+str.lastIndexOf('t'));
		System.out.println("index of  (l,13)="+str.indexOf('l',13));
		System.out.println("last index of (i,60)="+str.lastIndexOf('i',60));
		System.out.println(str1.substring(6));
		System.out.println(str1.substring(3,8));
		System.out.println(str2.concat("world"));
		System.out.println(str2.replace('l','w'));
		System.out.println(str3.toLowerCase());
		System.out.println(str1.trim());
		System.out.println(str1.length());
		System.out.println(str1.charAt(1));
		System.out.println(str4.toString());

		
	}
}