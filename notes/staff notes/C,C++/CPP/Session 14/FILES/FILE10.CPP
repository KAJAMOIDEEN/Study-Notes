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
	inventory item;
	int i;
	long ll=0L;
	fstream f;
	clrscr();

	f.open("f:/vasanthi/stock.dat",ios::in|ios::ate|ios::out|ios::binary);
	f.seekg(ll,ios::beg);

	cout<<"\nCurrent Contents of the Stock\n";

	while(!f.eof())
	{
	      f.read((char *)&item,sizeof(item));
		item.writedata();
	}

	f.clear();//turn of EOF flag

	cout<<"\nAdd an item\n";
	item.readdata();

	f.write((char*)&item,sizeof(item));
	f.seekg(0);
	cout<<"\nContents of Appended File\n";

	while(f.read((char *)&item,sizeof(item)))
	{
		item.writedata();
	}

	int last=f.tellg();
	int n=last/sizeof(item);
	cout<<"Number of object = "<<n<<endl;
	cout<<"Total bytes in the file = "<<last<<endl;

	cout<<"Enter object number to be updated \n";
	int obj;
	cin>>obj;
//	cin.get(ch);
	int location =(obj -1)*sizeof(item);
	if(f.eof())
		f.clear();
	f.seekp(location);

	cout<<"\nEnter new values of the object \n";
	item.readdata();


	f.write((char *)&item,sizeof(item))<<flush;
	cout<<"\nContents of update file\n";
	f.seekg(0);

	while(!f.eof())
	{
		f.read((char*)&item,sizeof(item));
		item.writedata();
	}

	f.close();
	getch();
}
