//Program for new & delete using array
#include<conio.h>
#include<iostream.h>
void main()
{
	int i;
	clrscr();
	int *p = new int[10];
	cout<<"\n Enter 5 Number:";
	for(i=0;i<5;i++)
		cin>>p[i];
	cout<<"\n Display 5 Number:";
	for(i=0;i<5;i++)
	{
		cout<<*p<<endl;
		p++;
	}
	cout<<"\n Address:"<<p;
	delete [] &p;
	cout<<"\n Address:"<<p;

	getch();
}

