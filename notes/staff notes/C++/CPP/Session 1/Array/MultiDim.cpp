//Program for MultiDimensional Array
#include<iostream.h>
#include<conio.h>
void main()
{
int a[3][3],i,j;
clrscr();
cout<<"Enter 9 Element :\n";
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}

}
cout<<"\n Matrix U Entered:";
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
		{
			cout<<"\t",a[i][j];
		}
		cout<<"\n";
}
getch();
}
