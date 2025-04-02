//Program for setf function
#include<iostream.h>
#include<conio.h>
void main()
{
	char *s = "Aptech";
	float f = 34;
	clrscr();
	cout.fill('*');
	cout.setf(ios::left,ios::adjustfield);
	cout.width(20);
	cout<<s<<endl;
	cout<<"\n*************************";
	cout<<"\n\t"<<f;
	cout<<"\n************************";
	cout.fill('*');
	cout.setf(ios::showpoint);
	cout<<f<<endl;
	cout.precision(2);
	cout<<f<<endl;
	hex(cout);
	cout.setf(ios::uppercase);
	cout<<10<<endl;
	cout.setf(ios::scientific,ios::floatfield);
	cout<<"\t\t"<<0.45678;
	getch();
	 }