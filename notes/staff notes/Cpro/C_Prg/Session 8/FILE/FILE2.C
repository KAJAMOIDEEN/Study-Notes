/*GETC() AND PUTC() FUNCTIONS:
  ~~~~~~~~~~~~~~~~~~~~~~~~~~~

getc();
~~~~~~~
   It is used to read the character from the file.

   syntax:
   ~~~~~~~
     char_var_name;
     var_name=getc(file_ptr);
putc():
~~~~~~~
  It is used to write the character into the file.

  syntax:
  ~~~~~~~
    char_var_name='a';
    putc(var_name,file_ptr);
    eof-end of file.*/

#include<stdio.h>
#include<conio.h>
main()
{
 FILE *fp;
 char c;
 clrscr();
 printf("Enter the text press.to end:\n");
 fp=fopen("sample.doc","w");
 while((c=getchar())!='.')
 putc(c,fp);
 fclose(fp);
 fp=fopen("sample.doc","r");
 while((c=getc(fp))!=EOF)
 printf("%c",c);
 fclose(fp);
 getch();

}