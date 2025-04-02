//Program function without arg with return type
int cube();
void main()
{
	int cu;
	clrscr();
	cu=cube();
	printf("\n Cube value is %d",cu);
	getch();
}
int cube()
{
int x,y,z;
x=2;
z=x*x*x;
return z;
}