//Program for Append
#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	char name[30];
	float per;
	clrscr();
fstream fin("first.txt",ios::binary|ios::in);
	if(fin==NULL)
	{
	cout<<"File does not exist";
		exit(0);
	}
	cout<<"\nReading from a file ...";
	fin>>name;
	fin>>per;
	cout<<"\nName :";
	cout<<name;
	cout<<"\nPercentage :";
	cout<<per;
	fin.close();
cout<<"\nReading operation is completed ";
	getch();
}
