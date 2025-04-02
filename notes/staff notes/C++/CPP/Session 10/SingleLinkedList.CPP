//Linked list using pointer
#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
int info;
struct node *next;
};
struct node *p,*temp,*temp1;
int ele,option;

void main()
{
	void creation();
	void insertion();
	void deletion();
	void display();
	clrscr();
	cout<<"\n1.Creation";
	cout<<"\n2.Insertion";
	cout<<"\n3.Deletion";
	cout<<"\n4.Display";

	do
	{
		cout<<"\nEnter the option";
		cin>>option;
		switch(option)
		{
			case 1:creation();
				break;
			case 2:insertion();
				break;
			case 3:deletion();
				break;
			case 4:display();
				break;
		}

	}while(option>0&&option<5);
getch();
}

void creation()
{
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	cout<<"\n enter the value";
	cin>>temp->info;
	p=temp;
}

void insertion()
{
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	cout<<"\nEnter the value";
	cin>>temp->info;
	cout<<"\n1.First";
	cout<<"\n2.Middle";
	cout<<"\n3.Last";
	cout<<"\nEnter the option";
	cin>>option;
	switch(option)
	{
		case 1:temp->next=p;
			p=temp;
			break;
		case 2:temp1=p;
			cout<<"\n after which element is inserted\n";
			cin>>ele;
			while(temp1->info!=ele)
				temp1=temp1->next;
			temp->next=temp1->next;
			temp1->next=temp;
			break;
		case 3:temp1=p;
			while(temp1->next!=NULL)
			temp1=temp1->next;
			temp1->next=temp;
			break;
	}
}

void deletion()
{
	cout<<"\n1.First";
	cout<<"\n2.Middle";
	cout<<"\n3.Last";
	cout<<"\nEnter the option";
	cin>>option;
	switch(option)
	{
		case 1:
			temp=p;
			p=p->next;
			free(temp);
			break;
		case 2:
			temp=p;
			cout<<"\n which the element is deleted";
			cin>>ele;
			while(temp->next->info!=ele)
				temp=temp->next;
			temp1=temp->next;
			temp->next=temp->next->next;
			free(temp1);
			break;

		case 3:	temp=p;
			while(temp->next->next!=NULL)
			temp=temp->next;
			temp1=temp->next;
			temp->next=NULL;
			free(temp1);
			break;
	}
}

void display()
{
	for(temp=p;temp!=NULL;temp=temp->next)
		cout<<"\n"<<temp->info;
}




