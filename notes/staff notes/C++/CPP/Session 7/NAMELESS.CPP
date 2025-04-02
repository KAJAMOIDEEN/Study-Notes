//Program for Nameless Temporay Object
#include<iostream.h>
#include<conio.h>
class index
{
	private:
		int value;
	public:
		index()
		{
			value=0;
		}
		index(int v)
		{
			value=v;
		}
		int getindex()
		{
			return value;
		}
		index operator ++()
		{
			value=value+1;
			return index(value);
		}
};
void main()
{
	clrscr();
	index idx1,idx2;
	cout<<"\n Index1:"<<idx1.getindex();
	cout<<"\n Index2:"<<idx2.getindex();
	idx1=idx2++;
	idx2++;
	cout<<"\n Index1:"<<idx1.getindex();
	cout<<"\n Index2:"<<idx2.getindex();
getch();
}
