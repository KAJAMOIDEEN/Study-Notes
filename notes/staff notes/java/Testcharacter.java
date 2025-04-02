// characte class method

class Testcharacter
{
	public static void main(String [] args)
	{
	int count;
	char [] values={'*','4','r',' ','R'};
	for(count=0;count<values.length;count++)
	{
	if(Character.isDigit(values[count]))
	  System.out.println("values[count]"+"is a Digit");
	if(Character.isLetter(values[count]))
	  System.out.println("values[count]"+"is a letter");
	if(Character.isLowerCase(values[count]))
	  System.out.println("values[count]"+"is a lowercase");
	if(Character.isUpperCase(values[count]))
	  System.out.println("values[count]"+"is a Upper case");
	if(Character.isSpace(values[count]))
	  System.out.println("values[count]"+"is a Space");
	if(Character.isUnicodeIdentifierStart(values[count]))
	  System.out.println("values[count]"+"is a unicode");
	}
}
}

	
	
	
	
	