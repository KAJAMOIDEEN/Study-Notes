//Program for Pass value in Argument
#include<iostream.h>
#include<conio.h>
class demo
{
	private:
		int n1,n2;
	public:
		void getdata()
		{
			cout<<"Enter the value of N1:";
			cin>>n1;
			cout<<"Enter the value of N2:";
			cin>>n2;
		}
		void showdata()
		{
			cout<<"\n Value of N1:"<<n1;
			cout<<"\n Value of N2:"<<n2;
		}
		void getobj(demo a1,demo a2)
		{
			n1=a1.n1+a2.n1;
			n2=a1.n2+a2.n2;
		}
};
void main()
{
	clrscr();
	demo s1,s2,s3;
	s1.getdata();
	s2.getdata();
	s1.showdata();
	s2.showdata();
	s3.getobj(s1,s2);
	s3.showdata();
getch();
}

