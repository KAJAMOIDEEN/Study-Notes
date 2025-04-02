//specific funct only friend of another class

#include<iostream.h>
#include<conio.h>
class two;
class one
{
	int income;

	public:
		int func(two t1);

		void setdata(int a)
		{
			income=a;
		}
		void show()
		{
			cout<<"class one income:"<<income;
		}
};



class two
{
	private:
		int income1;
		int income2;
	public:
		void setdata(int a,int b)
		{
			income1=a;
			income2=b;
		}
		friend int one::func(two t1);
};

int one::func(two t1)
{
	return t1.income1+t1.income2;
}

void main()
{
	clrscr();
	two t;
	one o;
	t.setdata(20,20);
	o.setdata(30);
	cout<<"class two total income:"<<o.func(t)<<endl;
	o.show();
	getch();
}






