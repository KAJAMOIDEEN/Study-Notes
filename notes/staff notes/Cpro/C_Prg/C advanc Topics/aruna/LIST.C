#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<alloc.h>
struct list
{
int no;
struct list *next;
};
struct list *start=NULL,*n=NULL,*temp=NULL;
void insert()
{
n=(struct list *)malloc(sizeof(struct list));
printf("\n enter the number:");
scanf("%d", &n->no);
if(start==NULL)
{
start=n;
temp=n;
temp->next=NULL;
}
else
{                           -
temp->next=n;
temp=n;
temp->next=NULL;
}
}
void disp()
{
if(start!=NULL)
printf("\n the values in the list:");
for(n=start;n!=NULL;n=n->next)
{
printf("%d->" ,n->no);
}
printf("NULL");
printf("\n\n list is empty");
}
void main()
{
int n;
char c;
do
{
printf("\n linked list");
printf("\n 1. Insert");
printf("\n 2.Display");
printf("\n 3.Exit");
printf("\n enter ur choice:");
scanf("%d", &n);
switch(ch)
{
case 1:
insert();
break;
case 2:
disp();
break;
default:
printf("\n u have entered wrong option");
break;
}
printf("do u want to continue?(y/n):");
fflush(stdin);
scanf("%c",&c);
if(c=='n')
{
clrscr();
disp();
printf("\n press enter to exit");
getch();
exit(0);
}
}while(c=='y');
getch();
}



