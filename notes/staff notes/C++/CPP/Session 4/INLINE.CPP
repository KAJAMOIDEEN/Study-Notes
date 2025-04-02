// Inline Function
#include<iostream.h>
#include<conio.h>
class Test
{
	private:
		int age;
	public:
		void getage();
		void get();
		void disage();
};

inline void Test::getage()
{
	cout<<"\nEnter Your Age :";
	cin>>age;
}

inline void Test::disage()
{
	cout<<"\nUr Age is :"<<age<<endl;
}

void Test::get()
{
	cout<<"\nFunction Get";
}


void main()
{
	Test ag;
	clrscr();
	ag.get();
	ag.getage();
	ag.get();
	ag.get();
	ag.disage();
	ag.get();
	getch();
}