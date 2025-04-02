#include<iostream.h>
#include<conio.h>

void divide(int x,int y,int z)
{
	cout<<"\nI'm in the function divide\n";

	if((x-y)!=0)
	{
		int R = z/(x-y);
		cout<<"\nResult ="<<R<<endl;
	}
	else
	{
		throw(x-y);
	}
}

void main()
{
	try
	{
		cout<<"I'm in the try block "<<endl;
		divide(10,20,30);
		divide(10,10,20);
	}
	catch(int i)
	{
		cout<<"\nCaught the exception ";
		cout<<"\nDivision by zero...";
	}
	cout<<"\nEND";
	getch();
}