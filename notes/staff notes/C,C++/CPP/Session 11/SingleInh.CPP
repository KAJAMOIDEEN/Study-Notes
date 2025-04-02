//Program for single inheritance
#include<iostream.h>
#include<conio.h>
class oldclass
{
	protected :
		int x;
		void get_x()
		{
			cin>>x;
		}
		void put_x()
		{
			cout<<endl<<"X = "<<x<<endl;
		}

};

class newclass : public oldclass
{
	private :
		int y;
	public :
		void get_y()
		{
			get_x();
			cin>>y;
		}

		void put_y()
		{
			put_x();
			cout<<"Y = "<<y<<endl;
		}
		void mul()
		{
			cout<<endl<<"Product of x and y : "<<x*y;
		}
};

void main()
{
	clrscr();
	newclass nc;
	nc.get_y();
	nc.put_y();
	nc.mul();
	getch();
}

