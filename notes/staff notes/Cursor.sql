use rose
--Cursor--
'It is a temporary storage area.It has two types. They are
   1. Ansi Cursor or Single Cursor
   2. Enhanced or Scrolled Cursor or multiple Cursor'
   
--ANSI Cursor--

'1.Next'
'Cursor value = select @@cursor_rows = -1 (return value)'

--Scrolled Cursor--
'It has Five types

1.Next
2.first
3.Last
4.Prior
5.Relative

select @@Cursor_rows = Display Multiple rows'

--Life Cycle Of Cursor--

'1.Declare the Cursor name
2. Open the Cursor name
3. Fetch the Cursor name
4. Close the cursor name
5. Deallocate the Cursorname'

--Example for ANSI Cursor--

create table stud(sno int, sname varchar(20),fees int)
insert into stud values (200,'Priya',1000)
insert into stud values (201,'Jeni',2000)
insert into stud values (202,'Praveen',3000)
insert into stud values (203,'John',4000)
insert into stud values (204,'Lekha',5000)
select * from stud

Declare stud_Cursor cursor
for
select * from stud
open stud_Cursor
fetch next from stud_Cursor
select @@Cursor_rows
close stud_Cursor
deallocate stud_Cursor


--Eample for Scroll Cursor--

Declare stud1 scroll cursor
for
select * from stud order by sno
open stud1
fetch next from stud1
fetch first from stud1
fetch last from stud1
fetch prior from stud1
fetch relative 2 from stud1
select @@Cursor_rows

   