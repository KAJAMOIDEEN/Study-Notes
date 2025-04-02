 C --> Compiler Programming Language


Introduction:
 ~~~~~~~~~~~~   It is one of the most popular language today
 BASIC COMBINED PROGRAMMING LANGUAGE(BCPL) called 'B' developed in 1960 at
CAMBRIDGE UNIVERSITY.The B language was modified by DENNIS RITCHE was
implemented at BELL LABORATORY IN 1972 the new language name was C
	C is a structured,middle-level,case-sensitive programming language.

Structure of C program
~~~~~~~~~~~~~~~~~~~~~~
Documentation section     -Comment line
link section               -header file -#include<stdio.h>,#include<conio.h>
definition section         -#define pi 3.14
Global declaration
main()                    stdio.h--->standard input output.header file
{                         conio.h--->console input output.header file
   declaration part;            datatype variablename1,variablename2;
   executable part;
}
comment line               --(Documentation section)
~~~~~~~~~~~
/* addition*/     //To hide the program line.(or)to Put heading at the top
Importance of c
~~~~~~~~~~~~~~~
1.It is well  suited for both system software and  package.
2.Programming in 'C' are defined efficient and fast
3.Only  32 keywords are available
4.If you save the file 8 characters will be accepted.
character set
~~~~~~~~~~~~~
       Character in 'C' are grouped into four categories
       1.Letter
	   A to Z(upper case)       a to z (lower case)

       2.Digits
	   0 to 9
       3. Special character
	  ,    *   /   &   #   ( )  [ ]   ?  !
       4.White space
	    space


				Datatypes
				   |
		      -------------------------------------
		      |                                    |
		      |                                    |
		      |                                    |
		 primary datatype                   compound datatype
							    |
			|                                   |
			|                                  1.array(100)
		     1.int (2)                            2.structure
		     2.float (4)                          3.union

		     3.char(1)
		     4.double(8)
		     5.void

		---------------------------------------------------
		|                                   |            |
		|                                   |            |
		float(4)                         integer     character
		double(8)
						(2)int         signed
		long double(10)                 (1)short int   unsigned char
						(4)long int
Fundamental Data types
~~~~~~~~~~~~~~~~~~~~~~
1 byte=8bits
bits=binary digts
     ~~        ~~

				      Size(Byte)(Ex)        Datatypes
					~~~~~~~~	~~~~~~~~					       ~~~~~~~~      ~~~~~~~~~
					   1 (A)          character
					   2 (10)         integer
					   4(12.24)       float
					   8(1234.5678)   double 					   0                 void
					   0	          void
Integer type
~~~~~~~~~~~~

 int
      Integer type are the whole number,range are valid according to the
      machine.                    (867686887(long),7867(int),45,1(short)

 short int
	Half the amount of storage as a regular int       (1 byte) eg:1
 long int
	To increase the range of value            (4 bytes) eg:766876

 floating type
	Decimal point with fractional part are stored in 32 bits
	(i.e.,)4 bytes
		   89.7678(float), 456.8686878(double),67.8686868686(long)
character type
	 Single character defined are a character type data usually stored
	 in 8 bits keyword as 'char'
	 unsigned char--- 0 to 255
	 signed char ----  -128 to 127

C Tokens(sub part of our program)
 ~~~~~~
   The smallest individual unit called tokens
   a. Identifier
   b. keyword  (32 keywords)
   c. constant
   d. string
   e. operator
Identifiers:
~~~~~~~~~~~~

	An identifier is a name given to the program elements
	such as variables,functions,procedures,arrays etc..
	An identifier is a user defined name.
	Eg:
	   int a,b,c;(or) int a=10 b=5;(declaration part)    here,a is a identifier
	   char ch;(or)ch='*';
keywords:
~~~~~~~~

	 predefined words(constant words)we can't change its meaning
	 keyword should not be a identifier
	eg:-
	for,do,auto,main.....
Constants:
~~~~~~~~~
	It consists of Five types.
	    i)Integer Constants	//0 to 9
	    ii)Floating point Constants.  //23.56
	    iii)Charcter constants.       //'A','a','%'
	    iv)String Constants.(set of characters) //"India","abc"
	    v) Symbolic constants.        //   # define
operators
~~~~~~~~~
    it is used to perform some operation.
    eg:+,-,*,/,%(modulo)

Declaration of variable
Syntax:
~~~~~~~
 Datatype variablename1,variablename2.....

 eg:
 ~~~                        Format specifier
   int m,b,f;     m=5          %d
   float Rs;      rs=98.78     %f
   char name;     a='e'        %c
   groupof characters(string)  %s
  Escape sequence
 ~~~~~~~~~~~~~~~
   " ****************" except format specifier and escape sequence

   %d %c %f
   C support some  special backslash character constant that are used in
   output function.these character combination known as escape sequence

  constant              meaning
   \a		=	 audiable sound
   \b		=	 backspace
   \n		=	 newline
   \'		=	 single quote
   \"		=	 double quote
   \\		= 	 backslash
   \?		=        Question mark
   \0		=	 null
   \t    	=   	 horizontal tab
































