#include<iostream.h>
#include<conio.h>
//virtual base class

class A
{      public:
	A()
	{
	  cout<<"\nbase class";
	}
};
class B:  public virtual  A
{
	public:
		B()
		{
		cout<<"\nclass b";
		}
};
class C: public virtual A
{       public:
	 C()
	{
	 cout<<"\nclass c";
	 }
};
class D:public B,public C
{
	 public:
		D()
		{
		cout<<"\nclass D";
		}
};

void main()
{
    clrscr();
    D obj1;
    getch();
}

