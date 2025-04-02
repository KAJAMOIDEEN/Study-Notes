#include<iostream.h>
#include<conio.h>
class cons
{
	private:
		int x,y;
      public:
		void show()
		{
		this->x=20;
		this->y=10;
		cout<<this<<endl;
		cout<<x<<y;
		}
};

void main()
{
clrscr();
cons c1;
c1.show();

getch();
}