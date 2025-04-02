
/*CALLOC:
  *******
  */
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct emp
{
int eno;
char name[20];
long int salary;
}*ptr;
main()
{
clrscr();
ptr=(struct emp*)calloc (sizeof(struct emp));
print("sizeof emp=%d\n bytes",sizeof(struct emp));
printf("eno=%d\n names=%s\n salary=%ld\n",ptr->eno,ptr->name,ptr->salary);
getch();
}