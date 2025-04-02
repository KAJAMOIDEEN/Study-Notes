#include<conio.h>
#include<iostream.h>
#include<fstream.h>


void main()
{
	int a[5]={10,20,30,40,50};
	clrscr();

	ofstream out;
	out.open("f:/vasanthi/binary");
	out.write((char *)&a,sizeof(a));
	out.close();
	clrscr();

	ifstream in;
	in.open("f:\vasanthi\binary");
	in.read((char *)&a,sizeof(a));

	for(int i=0;i<5;i++)
	{
		cout<<"\na[ "<<i+1<<" ] = "<<a[i];
	}
	in.close();
	getch();
}