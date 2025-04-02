import java.io.*;

class chararray_class
{
   	public static void main(String s[])throws IOException
	{
String str="welcome";
int a=str.length();
	char [] arr=new char[a+1];
	str.getChars(0,a,arr,0);
	CharArrayReader obj=new CharArrayReader(arr);
	int i;
	while((i=obj.read())!=-1)
	{
	System.out.println((char)i);
	}
}
}