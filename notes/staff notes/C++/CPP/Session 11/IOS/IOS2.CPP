#include<iostream.h>
#include<conio.h>

void main()
{
	int size=20;
	char city[20];
	clrscr();

  /*	cout<<"Enter city name : ";
	cin>>city;
	cout<<"\nCity Name : "<<city<<"\n";
    */
	cout<<"\nEnter city name again :";
	cin.getline(city,size);
	cout<<"\nCity Name Now: "<<city<<"\n\n";

	cout<<"Enter city name again :";
	cin.getline(city,size);
	cout<<"\nNew City Name : "<<city<<"\n\n";

	getch();
}