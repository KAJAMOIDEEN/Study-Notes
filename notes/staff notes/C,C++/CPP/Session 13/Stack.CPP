//Program for stack
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack
{
	int n;
	int item[5];
	int top;
};
struct stack s;
void main()
{
	void push();
	void view();
	void pop();
	int option;
	char choice= 'y';
	clrscr();
	cout<<"\n1. Push";
	cout<<"\n2. View";
	cout<<"\n3. Pop";
	cout<<"\n4. Exit";
	s.top=0;
	while (choice=='y')
	{
		cout<<"\nEnter Ur option:";
		cin>>option;
		switch (option)
		{
			case 1:
				push();
				break;
			case 2:
				view();
				break;
			case 3:
				pop();
				break;
			case 4:
				exit(1);
			default:
				cout<<"\nInvalid option";
		}
		cout<<"\nDo U wish to continue[y/n]:";
		fflush(stdin);
		choice=getchar();
	}
}

void push()
{
	if (s.top>=5)
	{
		cout<<"\nStack Overflow";
		cout<<"\nCann't add datas further";
	}
	else
	{
		cout<<"\nEnter the data:";
		cin>>s.n;
		s.item[s.top]=s.n;
		s.top++;
	}
}

void view()
{
	int i;
	cout<<"\nTop value is at:"<<s.top;
	for (i=s.top-1;i>=0;i--)
		cout<<"\n"<<s.item[i];
}

void pop()
{
	int i;
	if (s.top==0)
		cout<<"\nStack is empty";
	else
	{
		s.top--;
		cout<<"\nIs poped out"<<s.item[s.top];
	}
}


