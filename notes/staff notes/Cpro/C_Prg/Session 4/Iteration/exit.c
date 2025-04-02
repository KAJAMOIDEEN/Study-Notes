//Declaration: void exit(int exit_code); 

  #include <stdlib.h>
  #include <stdio.h>

  int main(void)
  {
    char choice;

    do {
      printf("Enter names (E)\n");
      printf("Delete name (D)\n");
      printf("Print (P)\n");
      printf("Quit (Q)\n");
      choice = getchar();
    } while(!strchr("EDPQ", toupper(choice)));

    if(choice=='Q') exit(0);

    return choice;
  }