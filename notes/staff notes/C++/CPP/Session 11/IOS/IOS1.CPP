//Program for get function
#include<iostream.h>
#include<conio.h>
void main()
{
	int count=0;
	char c;
	clrscr();
	cout<<"Input Text\n";
	cin.get(c);
	while(c!='\n')
	{
		cout.put(c);
		count++;
		cin.get(c);
	}
	cout<<"\nNumber of characters = "<<count<<"\n";
	getch();
}