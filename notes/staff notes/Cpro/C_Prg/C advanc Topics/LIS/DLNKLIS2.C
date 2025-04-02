#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void add();
void del();
void disp();
void delall();

struct list
{
struct list *prev;
int info;
struct list *next;
}*start;
void main()
{
int ch;
clrscr();
do
{
printf("\n1.ADD\n2.DEL\n3.DISP\n4.DELETEALL\n5.EXIT!!!\n");
printf("enter ur choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
add();
break;
}
case 2:
{
del();
break;
}
case 3:
{
disp();
break;
}
case 4:
{
delall();
break;
}
case 5:
exit(0);
}
}while((ch>0)&&(ch<6));
getch();

}
void add()
{
int a;
struct list *avail,*next,*temp,*pre;
avail=(struct list*)malloc(sizeof(struct list));
printf("ENTER THE ELEMENT TO BE SAVED");
scanf("%d",&a);
avail->prev=NULL;
avail->info=a;
avail->next=NULL;
if(start==NULL)
start=avail;
else if((avail->info)<(start->info))
{
avail->next=start;
start->prev=avail;
start=avail;
}
else
{
temp=start->next;
pre=start;
while(temp!=NULL)
{
if((temp->info)>(avail->info))
{
avail->prev=pre;
avail->next=temp;
pre->next=avail;
temp->prev=avail;
break;
}
else
{
pre=temp;
temp=temp->next;
continue;
}
}
if(temp==NULL)
{
avail->prev=pre;
pre->next=avail;
}
}
}
void disp()
{
struct list *temp;
temp=start;
if(temp!=NULL)
{
while(temp!=NULL)
{
printf("%d\n",temp->info);
temp=temp->next;
}
}
else
printf("list is empty\n");

}


void del()
{
int x;
struct list *temp;
if(start!=NULL)
{
printf("ENTER THE ELEMENT TO BE DELETED:");
scanf("%d",&x);
temp=start;
while(temp!=NULL)
{
if(temp->info==x)
{
printf("THE ITEM DELETED IS %d\n",x);
if((temp->prev)==(temp->next))
start=NULL;
else if((temp->next)==NULL)
(temp->prev)->next=NULL;
else if((temp->prev)==NULL)
{
start=temp->next;
(temp->next)->prev=NULL;
}
else
{
(temp->next)->prev=temp->prev;
(temp->prev)->next=temp->next;
}
break;
}
else
temp=temp->next;
}
}
if(temp==NULL)
printf("\nITEM NOT FOUND");
else if(temp<0)
printf("\nLIST UNDERFLOW");

}

void delall()
{
struct list *temp;
temp = start;
if (temp!=NULL)
{
while (temp!=NULL)
{
start=NULL;
temp=NULL;
}
 printf("\n Allthe items in the list are deleted\n");
}
}










