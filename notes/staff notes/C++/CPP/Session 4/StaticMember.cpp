//Program for Static Data Member
#include<iostream.h>
#include<conio.h>
class myclass
{
	static int count;
	int number;
	public :
		void set(int num)
		{
			number=num;
			++count;
		}
		void show()
		{
cout<<"\n Count: "<<count;
		}
};

int myclass :: count=0;

void main()
{
	clrscr();
	myclass mc1,mc2,mc3;
	mc1.show();
	mc1.set(100);
	mc1.show();
	mc2.set(200);
	mc2.show();
	mc2.set(300);
	mc3.set(400);
	mc3.show();
	getch();
}


