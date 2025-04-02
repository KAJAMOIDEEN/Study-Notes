//Program for fill & precision
#include<iostream.h>
#include<conio.h>
void main()
{
	int a[3]={10,3,42};
	float f=56.908;
	clrscr();
	cout.fill('*');
	cout.width(15);
	cout<<     "Items"<<"\n";
	cout.width(8);
	cout<<   "Cost"<<"\n";
	int sum = 0;
	for(int i=0;i<3;i++)
	{
		cout.width(5);
		cout<<a[i]<<"\n";
		sum+=a[i]; //sum=sum+a[i]
	}
	cout.width(15);
	cout<<sum<<"\n";
	cout.width(10);
	cout<<f<<endl;
	cout.width(10);
	cout.precision(2);
	cout<<f;
	getch();
}

