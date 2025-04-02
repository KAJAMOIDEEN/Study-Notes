/*USER DEFINED DATA TYPES:
  ~~~~ ~~~~~~~ ~~~~ ~~~~~
	DATATYPE         KEYWORD
	~~~~~~~~	 ~~~~~~~
     1.typedefinition   typedef
     2.enumerator	enum
     3.union		union

TYPE DEFINITION:
~~~~~~~~~~~~~~~~
 SYNTAX:
 ~~~~~~~
  typedef datatype newdatatype;

  ex:
  ~~~
  typedef int mark;

  Typedef is used to change the data type.

  ex:
  ~~
  int to mark */
#include<stdio.h>
#include<conio.h>
typedef int mark;
main()
{
mark m1,m2,tot;
clrscr();
scanf("%d%d",&m1,&m2);
tot=m1+m2;
printf("Total=%d",tot);
getch();
}
