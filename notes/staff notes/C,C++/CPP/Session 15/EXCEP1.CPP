#include<iostream.h>
#include<conio.h>

void main()
{
	int a,b;
	clrscr();
	cout<<"Enter a and b value :";
	cin>>a>>b;

	int x = a-b;

	try
	{
		if(x!=0)
		{
cout<<"Result(a/x) = "<<a/x<<endl;
		}
		else
		{
			throw(x);
		}
	}

	catch(int i)
	{
cout<<"Exception caught : X = "<<i<<endl;
	}
	cout<<"END";
	getch();
}