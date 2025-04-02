 #include<iostream.h>
 #include<conio.h>
 class cons
 {
	private:
		int x,y;
      public:
		cons()
		{
		x=0;
		y=0;
		cout<<x<<y<<endl;
		}
		cons(int a)
		{
		x=a;
		cout<<x<<endl;
		}
		cons(int a,int b)
		{
		x=a;
		y=b;
		cout<<a<<b<<endl;
		}
};

void main()
{
clrscr();
cons c1;
cons c2(10);
cons c3(10,20);
getch();
}