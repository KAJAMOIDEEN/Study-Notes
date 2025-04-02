/*REALLOC
  ~~~~~~~
      It is used to real locate the already allocated memory.
syntax:
~~~~~~~
  ptr=realloc(old ptr,new size);*/
  #include<stdio.h>
  #include<conio.h>
  #include<alloc.h>
  main()
  {
   char *str,*r;
   clrscr();
   str=(char*)calloc(10,sizeof(char));
   strcpy(str,"hello csc");
   printf("string is=%s",str);
   r=realloc(str,14);
   printf("\n");
   r="hai,welcome to csc";
   printf("String is=%s",r);
   free(str);
   free(r);
   getch();
}