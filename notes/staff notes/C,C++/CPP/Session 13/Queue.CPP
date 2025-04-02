//Program for Queue
#include<iostream.h>
#include<conio.h>
#include<process.h>
#define Q 10
class queue
{
	public:
	int front,rear,i,que[Q];
	queue()
		{
		front=1;
		rear=0;

		}
		void addq();
		void delq();
		void dis();
	};
	void queue::addq()
	{
		if(rear==Q)
		cout<<"\nQUEUE IS FULL";
		else
		{
		rear++;
		cout<<"\n\n ENTER THE ELEMENT:";
		cin>>que[rear];
		}
	}
	void queue::delq()
	{
		if(rear==0||front>rear)
		cout<<"\n\t QUEUE IS EMPTY\n";
		else
		{
		cout<<"\n\t DELETED THE ELEMENT:"<<que[front];
		front++;
		}
	}
	void queue::dis()
	{
		if(rear==0||front>rear)
		cout<<"\n QUEUE IS EMPTY\n";
		else
		{
		cout<<"\n\t ELEMENTS ARE:";
		for(i=rear;i>=front;i--)
		cout<<"->"<<que[i];
		cout<<"\n";
		}
	}
	void main()
	{
		int ch;
		clrscr();
		queue a;
		cout<<"\n OUTPUT";
		cout<<"\n ******";
		cout<<"\nQUEUE MENU";
		cout<<"\n***** ****";
	cout<<"\n\t 1.ADD Q \n\t 2.DEL Q \n\t 3.DISPLAY \n\t 4.EXIT\n";
		while(1)
		{
		cout<<"\n ENTER YOUR CHIOCE:";
		cin>>ch;

		switch(ch)
		{
		case 1:
		a.addq();
		break;

		case 2:
		a.delq();
		break;

		case 3:
		a.dis();
		break;

		case 4:
		exit(0);

	}
	}
	}





