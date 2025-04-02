//Program for File Read
#include<iostream.h>
#include<fstream.h>
#include<conio.h>
void main()
{
	char name[30];
	float per;
	clrscr();
	ifstream in("first.doc");
	cout<<"\nReading from a file ...";
	in>>name;
	in>>per;
	cout<<"\nName :";
	cout<<name;
	cout<<"\nPercentage :";
	cout<<per;
	in.close();
cout<<"\nReading operation is completed ";
	getch();
}
