/*STACK:
  ~~~~~~*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void add();
void del();
void disp();
char stack[100];
int i,top=0;
main()
{
 int ch;
 clrscr();
 do
 {
 printf("\n 1.add");
 printf("\n 2.del");
 printf("\n 3.disp");
 printf("\n 4.exit");
 printf("Enter the choice(1-4):");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:add();break;
 case 2:del(); break;
 case 3:disp();break;
 case 4:exit(1);break;
 default:printf("\n Invalid choice");break;
 }
 }
 while((ch>0)&&(ch<5));
 getch();
 }
 void add()
 {
 printf("\n Enter the element to be pushed in stack:");
 scanf(" %c",&stack[++top]);
 }
 void del()
 {
 if(top==0)
 printf("\n stack is empty");
 else
 {
 printf("\n The poped element is:%c",stack[top]);
 top--;
 }
 }
 void disp()
 {
 if(top==0)
 printf("\n stack is empty");
 else
 {
 printf("\n The stack content are:");
 for(i=top;i>0;i--)
 printf("->%c",stack[i]);
 }
 }
