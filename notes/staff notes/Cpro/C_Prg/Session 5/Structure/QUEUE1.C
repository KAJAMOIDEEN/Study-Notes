#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct queue
{
	int n;
	int item[5];
	int front;
	int rear;
};

struct queue q;
void main()
{
	void enq();
	void view();
	void deq();
	int option;
	char choice= 'y';
	clrscr();

	printf("\n1. Enq");
	printf("\n2. View");
	printf("\n3. Deq");
	printf("\n4. Exit");

	q.front=0;
	q.rear=0;
	while (choice=='y')
	{
		printf("\nEnter Ur option:");
		scanf("%d",&option);
		switch (option)
		{
			case 1:
				enq();
				break;
			case 2:
				view();
				break;
			case 3:
				deq();
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

void enq()
{
	if (q.front>=5)
	{
		printf("\nQueue Overflow");
		printf("\nCann't add datas further");
	}
	else
	{
		printf("\nEnter the data:");
		scanf("%d",&q.n);
		q.item[q.front]=q.n;
		q.front++;
	}
}

void view()
{
	int i;
	printf("\nTop value is at [%d]",q.front);
	for (i=q.rear;i<q.front;i++)
		printf("\n%d",q.item[i]);
}

void deq()
{
	int i;
	if (q.rear>=5)
		printf("\nStack is empty");
	else
	{
		printf("\nRear value is at [%d]",q.rear);
		printf("\n%d is dequeued",q.item[q.rear]);
		q.rear++;
	}
}


