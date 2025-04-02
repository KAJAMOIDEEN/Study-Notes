#include<conio.h>
#include<iostream.h>
#include<fstream.h>
#include<string.h>


void main()
{
	char str[50];
	clrscr();

	fstream f;
	cout<<"Enter a string :";
	cin.getline(str,50);

	int len = strlen(str);
	f.open("f:/vasanthi/string.txt",ios::out);

	for(int i=0;i<len;i++)
	{
		f.put(str[i]);
	}

//	f.seekg(0);
	f.close();
	fstream fin;

	fin.open("f:/vasanthi/string.txt",ios::in);

	char c;
	while(f)
	{
		f.get(c);
		cout<<c;
	}

	f.close();
	getch();
}



