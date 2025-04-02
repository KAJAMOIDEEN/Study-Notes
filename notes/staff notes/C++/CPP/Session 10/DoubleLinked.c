//Doubly Linked list using pointer
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
int info;
struct node *prev,*next;
};
struct node *p=NULL,*temp,*temp1;
int ele,option;
void main()
{
void creation();
void insertion();
void deletion();
void display();
clrscr();
printf("1.creation\n");
printf("2.insertion\n");
printf("3.deletion\n");
printf("4.display\n");
do
{
printf("enter the option\n");
scanf("%d",&option);
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
temp1=(struct node*)malloc(sizeof(struct node));
temp->prev=NULL;
temp1->next=NULL;
printf("enter the first value\n");
scanf("%d",&temp->info);
printf("enter the first value\n");
scanf("%d",&temp1->info);
temp->next=temp1;
temp1->prev=temp;
p=temp;
}
void insertion()
{
temp=(struct node*)malloc(sizeof(struct node));
temp->prev=NULL;
temp->next=NULL;
printf("Enter the value\n");
scanf("%d",&temp->info);
printf("1.First\n");
printf("2.Middle\n");
printf("3.Last\n");
printf("Enter the option");
scanf("%d",&option);
switch(option)
{
case 1:temp->next=p;
	p->prev=temp;
	p=temp;
	break;
case 2:temp1=p;
	printf("After which element is inserted\n");
	scanf("%d",&ele);
	while(temp1->info!=ele)
	temp1=temp1->next;
	temp->next=temp1->next;
	temp1->next->prev=temp;
	temp->prev=temp1;
	temp1->next=temp;
	break;
case 3:temp1=p;
	while(temp1->next!=NULL)
	temp1=temp1->next;
	temp1->next=temp;
	temp->prev=temp1;
	break;
}
}
void deletion()
{
printf("1.First\n");
printf("2.Middle\n");
printf("3.Last\n");
printf("Enter the option\n");
scanf("%d",&option);
switch(option)
{
case 1:temp=p;
	p=p->next;
	p->prev=NULL;
	free(temp);
	break;
case 2:temp=p;
	printf("Which the element is deleted\n");
	scanf("%d",&ele);
	while(temp->info!=ele)
	temp=temp->next;
	temp->prev->next=temp->next;
	temp->next->prev=temp->prev;
	free(temp);
	break;
case 3:temp=p;
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
temp=p;
while(temp->next!=NULL)
{
printf("%d\t",temp->info);
temp=temp->next;
}
printf("%d\n",temp->info);
while(temp->prev!=NULL)
{
printf("%d\t",temp->info);
temp=temp->prev;
}
printf("%d\n",temp->info);
}





