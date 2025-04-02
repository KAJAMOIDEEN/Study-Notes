//Program for Write function
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	char *s1 = "C++";
	char *s2 = "Programming";
	clrscr();
	int m = strlen(s1);
	int n = strlen(s2);
	for(int i=1;i<n;i++)
	{       cout<<"\t";
		cout.write(s2,i);
		cout<<"\n";
	}

	for(i=n;i>0;i--)
	{
		cout<<"\t";
		cout.write(s2,i);
		cout<<"\n";
	}

	cout.write(s1,m).write(s2,n);
	cout<<"\n";
	getch();
}

