//Program for Ambiguities
#include<iostream.h>
#include<conio.h>

class one
{
    public:
	void show()
	{
	cout<<"\nclass one function";
	}
};
class two
{
	public:
		void show()
		{
		cout<<"\nclass two function";
		}
};
class three:public one,public two
{

};

void main()
{
	clrscr();
	three obj;
	//obj.show();    // ambiguous
	obj.one::show();
	obj.two::show();
	getch();
}


