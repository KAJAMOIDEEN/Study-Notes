class Character_class
{
	public static void main(String [] s)
	{
 	char [] ch={'a','p','t','^','c','h'};
	for(int i=0;i<5;i++)
	{
	if(Character.isJavaIdentifierPart(ch[i]))
	{
	System.out.println("Identifier");
	}
	}
}
}
