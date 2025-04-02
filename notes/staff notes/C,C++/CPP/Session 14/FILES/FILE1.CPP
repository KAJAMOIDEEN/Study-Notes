//Program for File Open
#include<iostream.h>
#include<fstream.h>
#include<conio.h>
void main()
{
	char name[30];
	float per;
	clrscr();
	ofstream out("first.txt");
	cout<<"Enter the name :";
	cin>>name;
	cout<<"\nEnter the Percentage :";
	cin>>per;
	cout<<"\nWriting to a file ...";
	out<<name<<"\n";
	out<<per<<"\n";
	out.close();
cout<<"\nWriting operation is completed ";
	getch();
}
