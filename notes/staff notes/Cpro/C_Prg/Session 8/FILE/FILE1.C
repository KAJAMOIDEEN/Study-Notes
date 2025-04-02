			     9.FILES
			       ~~~~~
FILES:
~~~~~~
  Files are used to manage large volume of data.

FILE OPERATIONS:
~~~~~~~~~~~~~~~
1.Create a new file.
2.Opening an existing file.
3.Closing an existing file.
4.Reading the contents on the file.
5.Writing data on the file.
6.Modifing data on the file.     -->
7.deleting file.
8.Renaming file.

FILE OPEN FUNCTION:
~~~~~~~~~~~~~~~~~~~
 fopen() is used to open a file.
 fopen() is defined in<stdio.h>
 -We can open a file in several modes.

syntax:
~~~~~~~
 FILE -->data type.
 FILE *fileptr;
 file-ptr=fopen("filename","mode");

FILE MODES:
~~~~~~~~~~~
read  -'r'
write -'w'
append-'a'

ex:
~~
 FILE *fp;
 fp=fopen("sample.txt","r");

FILE CLOSE:
~~~~~~~~~~~
  fclose()will close the specified file.
  fcloseall()will close all the files that currently begin open.

ex:
~~
fclose(fp);
fcloseall();

FILE FUNCTIONS:
~~~~~~~~~~~~~~~
putc()    -It is used to write the character into the file.
getc()    -It is used to read the character into the file.
fprintf() -It is used to write formatted data in the file.
fscanf()  -It is used to read formatted data from the file.
getw()    -Read integer values.
putw()    -Write integer values.
EOF       -End of file