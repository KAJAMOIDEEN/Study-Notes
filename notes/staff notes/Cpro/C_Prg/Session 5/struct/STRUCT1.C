

			       8.STRUCTURE
				 ~~~~~~~~~
STRUCTURE:
~~~~~~~~~~
	Structure is a collection of related data item of different data type.
The individual structure elements are reffered as members.

syntax:
~~~~~~~
 struct structure-name
 {
 dt var1;
 dt var2;
 dt var3;
 ...
 dtvaran;
 }st-var-name;
ex:
~~
struct stud
{
int rno;
char name[20];
float avg;
};

create the struct variable:
~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    struct<str name>st-var-name;
ex:
~~
 struct stud s;

How to access variable in a structure:
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 '.'member access operator

 st.var.name.var.name;

 ex:
 s.rno;
 s.name;

example:
~~~~~~~~
  struct temp
  {
   int no;
   char name[20];
   float m1,m2,m3;
   }s;
   struct emp s;
   s.eno=10;
   strcpy(s.name,"seenu");
   s.m1=20.3;
   s.m2=70.6;
   s.m3=90.8;
