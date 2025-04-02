     /*			     7.MORE ON POINTERS
			       ~~~~~~~~~~~~~~~~
Two types of memory allocation.they are

  1.static memory allocation.
  2.dynamic memory allocation.

STATIC MEMORY ALLOCATION:
~~~~~~~~~~~~~~~~~~~~~~~~~~
	 It is the process of allocating memory at the compile time.
	 eg:int a=5;
DYNAMIC MEMORY ALLOCATION:
~~~~~~~~~~~~~~~~~~~~~~~~~~
	 It is the proceess of a allocating memory at the run time
(while the program execution) instead of allocating memory at the
compile time.

TYPES OF MEMORY ALLOCATION:
~~~~~~~~~~~~~~~~~~~~~~~~~~~
	Four type of memory allocation.they are

	i.malloc()    single block of memory
	ii.calloc()   multiple block of memory
	iii.realloc() modified block of memory
	iv.free()     relase the allocated memory

header file<alloc.h>

Malloc:
~~~~~~~
     Allocates requested size of bytes and returns a pointer to the
1st byte of the allocated size.

syntax:
~~~~~~~
ptr var=(datatype*)malloc(size*sizeof(datatype));
*/

#include<stdio.h>
#include<conio.h>
#include<alloc.h>
main()
{
 int *a,*n,size;
 clrscr();
 printf("Enter the size\n");
 scanf("%d",&size);
 n=(int*)malloc(size*sizeof(int));
 printf("address of first byte is %d",n);
 for(a=n;a<n+size;a++)
 {
  scanf("%d",a);
 }
 printf("the values are\n");
 for(a=n;a<n+size;a++)
 printf("%d is stored in address %u\n",*a,a);

 free(n);
 getch();
 }



