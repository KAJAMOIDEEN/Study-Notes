/*  Doubly Linked List */

#include<stdio.h>
#include<conio.h>

struct list
{
    int no;
    char name[20];
    struct list *next;
    struct list *prev;
};

typedef struct list NODE;

main()
{
   char wish;
   NODE *front= NULL;
   NODE *new  = NULL;
   NODE *ptr  = NULL;
   NODE *r    = NULL;

   do
   {
       clrscr();
       new =(NODE*) malloc(sizeof(NODE));

       new->next=NULL;
       new->prev=NULL;

       printf("Enter Number : ");
       scanf("%d",&new->no);
       fflush(stdin);

       printf("Enter Name : ");
       gets(new->name);

       if(front==NULL)
	   front=new;
       else
       {
	  for(ptr=front;ptr->next!=NULL;ptr=ptr->next) /* move to last node */
		  ptr->next=new;
	     new->prev=ptr;
       }

       printf("Continue (Y/N) ");
       fflush(stdin);
       scanf("%c",&wish);
   }
   while(wish=='y' || wish=='Y');

   printf("\n\n Forward Direction Display \n\n");

   for(ptr=front;ptr!=NULL;ptr=ptr->next)
   {
	printf("%d \t %s \n",ptr->no,ptr->name);
	r=ptr;
   }

   printf("\n\n Backward Direction Display \n\n");

   for(ptr=r;ptr!=NULL;ptr=ptr->prev)
	printf("%d \t %s \n",ptr->no,ptr->name);

 getch();
}