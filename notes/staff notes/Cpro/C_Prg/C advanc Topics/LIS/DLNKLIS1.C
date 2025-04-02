/* DOUBLY LINKED LIST*/


#include<stdio.h>
#include<conio.h>
struct list
{
struct list *prev;
int info;
struct list *next;
}*start;
void insert();
void del();
void disp();
main()
{
 int ch=1;
 clrscr();
 start=NULL;
 while(ch!=4)
 {
  printf("1.insert\n 2.delete\n 3.display\n Enter choice:");
  scanf("%d",&ch);
  switch(ch)

  {
   case 1:insert();break;
   case 2:del();break;
   case 3:disp();break;
   default:break;
   }
  }
  getch();
  }
void insert()
 {
  int a;
  struct list *avail,*temp,*pre;
  avail=(struct list *)malloc(sizeof(struct list));
  printf("\nenter the node to be inserted");
  scanf("%d",&a);
  avail->prev=NULL;
  avail->info=a;
  avail->next=NULL;
  if(start==NULL)
  start=avail;
  else if((avail->info) < (start->info))
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
    if((temp->info) > (avail->info))
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
   while(temp!=NULL)
   {
    printf("%d\n",temp->info);
    temp=temp->next;
    }
   }

  void del()
  {
   int x;
   struct list *temp;
   if(start!=NULL)
   {
    printf("enter the item to be deleted:");
    scanf("%d",&x);
    temp=start;
    while(temp!=NULL)
    {
     if(temp->info==x)
     {
      printf("the item deleted is:%d\n",temp->info);
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
     printf("\nItem not found");
   else if(temp<0)
     printf("\nlist under flow");
  }
