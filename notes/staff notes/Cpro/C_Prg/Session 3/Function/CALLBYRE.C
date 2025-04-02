//Call by Reference
void change(int *x,int *y);
void main()
{
int a=10,b=20;
clrscr();
printf("\n Before calling the function a=%d, b=%d",a,b);
change(&a,&b);
printf("\n After Calling a=%d, b=%d",a,b);
getch();
}
void change(int *x,int *y)
{
*x=x+5;
*y=y+10;
printf("\n inside the function a=%d,b=%d",*x,*y);
}
