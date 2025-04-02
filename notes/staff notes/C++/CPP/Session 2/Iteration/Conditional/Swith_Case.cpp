//Program for switch case statement
#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,choice;
	clrscr();
	cout<<"Enter Two Number:";
	cin>>a>>b;
	cout<<"\t\t1.Addition"<<endl;
	cout<<"\t\t2.Subtraction"<<endl;
	cout<<"\t\t3.Mulitiply"<<endl;
	cout<<"\t\t4.Division"<<endl;
	cout<<"Enter U choice:";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"Add Value:"<<a+b;
			break;
		case 2:
			cout<<"Sub value:"<<a-b;
			break;
		case 3:
			cout<<"Multi Value:"<<a*b;
			break;
		case  4:
			cout<<"Div Value:"<<a/b;
			break;
		default:
			cout<<"Invaild Choice";
	}
getch();
}