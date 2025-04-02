#include<iostream.h>
#include<fstream.h>
#include<conio.h>


void main()
{
	char name[30];
	float per;
	clrscr();

	fstream fout("f:/vasanthi/outpu.txt",ios::app);

	cout<<"Enter the name :";
	cin>>name;

	cout<<"\nEnter the Percentage :";
	cin>>per;

	cout<<"\nWriting to a file ...";
	fout<<name<<"\n";
	fout<<per<<"\n";
	fout.close();
	cout<<"\nWriting operation is completed ";
	getch();
}
