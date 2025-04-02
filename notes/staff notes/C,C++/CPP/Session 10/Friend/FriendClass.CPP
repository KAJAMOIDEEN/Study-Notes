//Program for Friend Class
#include<iostream.h>
#include<conio.h>
class B; //forward declare
class A
{
	private:
		int income1,income2;
	public:
		void setdata(int a,int b)
		{
			income1=a;
			income2=b;
		}
		friend class B;
};

class B
{
	private:
		int income;
	public:
		int fun1(A a)
		{
			return a.income1+a.income2;
		}
		void setdata(int n)
		{
			income =n;
		}
		void show()
		{
			A a1;
			a1.setdata(10,20);
	cout<<"class A  income in show()"<<a1.income1<<a1.income2<<endl;
		cout<<"class B income in show()"<<income<<endl;
		}
};

void main()
{
	clrscr();
	A obj1;
	B obj2;
	obj1.setdata(50,20);
	obj2.setdata(30);
	cout<<"class A total income:"<<obj2.fun1(obj1)<<endl;
	obj2.show();
	getch();
}


