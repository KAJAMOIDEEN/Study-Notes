//Program for Static Member Function
#include<iostream.h>
#include<conio.h>
class statclass
{
	static int count;
	int no;
	public :
		void get(int n)
		{
			no=n;
			++count;
		}
		void put()
		{
			cout<<"\nNumber : "<<no;
		}

		static void showcount()
		{
			cout<<"Count : "<<count;
		}
};

int statclass :: count=0;

void main()
{
	statclass s1,s2,s3;
	clrscr();
	statclass::showcount();
	s1.get(10);
	s1.put();
	statclass::showcount();
	s2.get(100);
	s2.put();
	s2.showcount();
	s3.get(1000);
	s3.put();
	s3.showcount();
	getch();
}
			