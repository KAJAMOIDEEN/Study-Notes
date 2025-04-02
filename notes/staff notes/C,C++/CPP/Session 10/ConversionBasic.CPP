//Basic type to user defined object
#include<iostream.h>
#include<conio.h>
class converter
{
	private:
		int feet;
		float inches;
	public:
		converter()
		{
		feet=0;
		inches=0.0;
		}

	       converter(float metres)
		{
		float f;
		f=3.28*metres;
		feet=int(f);
		cout<<feet<<"\n";
		inches=12 * (f-feet);
		cout<<inches;
		}
/*
	      operator float()
		{
		 float f;
		 f=inches/12;
		 f+=float(feet);  //f=f+float(feet);
		 return (f/3.28);
		}*/
};

void main()
{
	clrscr();

	converter d1=1.55;
//     converter m;
	converter d2;
	 d2=2.0;

  //     m=float(d1);

	getch();
}
