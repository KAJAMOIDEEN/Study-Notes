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

	printf("\n1. Push");
	printf("\n2. View");
	printf("\n3. Pop");
	printf("\n4. Exit");

	s.top=0;
	while (choice=='y')
	{
		printf("\nEnter Ur option:");
		scanf("%d",&option);
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
				printf("\nInvalid option");
		}
		printf("\nDo U wish to continue[y/n]:");
		fflush(stdin);
		choice=getchar();
	}
}

void push()
{
	if (s.top>=5)
	{
		printf("\nStack Overflow");
		printf("\nCann't add datas further");
	}
	else
	{
		printf("\nEnter the data:");
		scanf("%d",&s.n);
		s.item[s.top]=s.n;
		s.top++;
	}
}

void view()
{
	int i;
	printf("\nTop value is at [%d]",s.top);
	for (i=s.top-1;i>=0;i--)
		printf("\n%d",s.item[i]);
}

void pop()
{
	int i;
	if (s.top==0)
		printf("\nStack is empty");
	else
	{
		s.top--;
		printf("\n%d is poped out",s.item[s.top]);
	}
}


