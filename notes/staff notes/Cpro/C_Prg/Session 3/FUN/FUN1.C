
/*FUN WITH ARGS AND NO RTN TYPE
  ~~~ ~~~~ ~~~~ ~~~ ~~ ~~~ ~~~~
Global variable:
~~~~~~~~~~~~~~~~
    We can execute only outside of the main function.
eg:int z;

Local variable:
~~~~~~~~~~~~~~~
     We can execute both outside & inside of the main function.
eg:int a,b;

Actual arguments:
~~~~~~~~~~~~~~~~~
      It is passed from the main function.

Formul arguments:
~~~~~~~~~~~~~~~~~
       It is passed from sub function.*/

void mul(int ,int);
void div(int ,int);
int z; /*global dec*/
main()
{
 int a,b;    /*local variable*/
 clrscr();
 printf("Enter  a and b\n");
 scanf("%d%d",&a,&b);
 mul(a,b);
 mul(4,6);
 div(a,b);
 div(6,5);
 getch();
 }
 void mul(int x,int y)
 {
 z=x*y;
 printf("mul=%d\n",z);
 }
 void div(int p,int q)
 {
 z=p/q;
 printf("div=%d\n",z);
 }










