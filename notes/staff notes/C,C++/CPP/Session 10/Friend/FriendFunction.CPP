//Program for Friend   Functions
#include<iostream.h>
#include<conio.h>
class A
{
	private:
		int a,b;
		 friend void display(A obj);
	public:
		void add();


};
void A::add()
{
	cout<<"Enter the value of A:";
	cin>>a;
	cout<<"Enter the Value of B:";
	cin>>b;
}
void display(A obj)
{
	cout<<"\n A value is:"<<obj.a;
	cout<<"\n B value is:"<<obj.b;
}
void main()
{
	clrscr();
	A myobj;
	myobj.add();
	display(myobj);
	getch();
}
