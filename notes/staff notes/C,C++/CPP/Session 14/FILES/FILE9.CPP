#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<fstream.h>


class inventory
{
	char name[20];
	int code;
	int cost;

	public :
		void readdata()
		{
			cout<<"Enter Name : ";
			cin>>name;
			cout<<endl<<"Enter code :";
			cin>>code;
			cout<<"\nEnter cost :";
			cin>>cost;
		}
		void writedata()
		{
			cout<<setiosflags(ios::left);
			cout<<setw(10)<<name;

			cout<<setiosflags(ios::right);
			cout<<setw(10)<<code;

			cout<<setprecision(2);
			cout<<setw(10)<<cost<<endl;
		}
};

void main()
{
	inventory item[3];

	fstream f;
	clrscr();

	f.open("f:/vasanthi/stock.dat",ios::out);

	cout<<"\nEnter the Stock details of three items :\n";
	for(int i=0;i<3;i++)
	{
		item[i].readdata();
		f.write((char *)&item[i],sizeof(item[i]));
	}

	f.close();
	f.open("f:/vasanthi/stock.dat",ios::in);

	cout<<"\nOutput\n";

	for(i=0;i<3;i++)
	{
		f.read((char *)&item[i],sizeof(item[i]));
		item[i].writedata();
	}

	f.close();
	getch();
}

