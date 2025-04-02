//Program for Palindrome using pointer variable
#include<iostream.h>
#include<conio.h>
void main()
{
char name[5] = {'M', 'A', 'D','A','M'};
int flag = 1;
char *start, *end;

clrscr();

start = name;
end = name + 4;

for(;start <= end;start++, end--)
{
	if(*start != *end)
	{
			flag = 0;
			 break;
	}
}

if(flag==1)
cout<<"\n The String is Palindrome";
else
cout<<"\n The string is not palindrome";
getch();
}