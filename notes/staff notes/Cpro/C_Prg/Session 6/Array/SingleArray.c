void main()
{
int a[4],b,high=0;
clrscr();
printf("Enter 5 values:\n");
for(b=0;b<5;b++)
{
	scanf("%d",&a[b]);
	if(a[b]>high)
	high=a[b];
}
printf("\n High=%d",high);
getch();
}

