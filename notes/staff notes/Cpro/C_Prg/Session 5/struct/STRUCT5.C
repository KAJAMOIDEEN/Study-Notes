/*STRUCTURE INTILIZATION:
  ~~~~~~~~~~~~~~~~~~~~~~~*/
struct stud
{
 int rno;
 char name[20];
 float avg;
};
main()
{
 struct stud s={1,"viji",98.5};
 clrscr();
 printf("rno=%d\n",s.rno);

 printf("name=%s\n",s.name);
 printf("avg=%0.2f",s.avg);
 getch();
}