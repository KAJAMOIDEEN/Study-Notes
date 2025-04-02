//Program for Single Dimensional Array
#include<iostream.h>
#include<conio.h>
void main()
{
	int arr[10],i,sum=0;
	float avg;
	clrscr();
	cout<<"Enter 10 Elements:\n";
	for(i=0;i<10;i++)
	{
		cin>>arr[i];
		sum=sum+arr[i];
	}
	cout<<"\n Total values is"<<sum);
getch();
}