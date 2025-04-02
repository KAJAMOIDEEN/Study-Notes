#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<fstream.h>
#include<stdlib.h>

void main()
{
	clrscr();
	ifstream f;
	char name[30];
//	float per;

	f.open("f:/vasanthi/string.txt");
	if(f.fail())
	{
		cout<<"\nCan't open the file";
		exit(0);
	}

	while(!f.eof())
	{
		f>>name;
		int l=strlen(name);
		cout.write(name,l);

  /*		f>>per;
		cout<<"\nPercentage = "<<per;*/

	}


	f.close();
	getch();
}

