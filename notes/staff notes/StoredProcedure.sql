use roja
---Stored Procedure--

'It is a Precombined Sql statement'

'Syntax'

'create procedure [procedurename] @column_name1 datatype,--- @column_name2 datatype) as
insert into tablename values(@column_name1,@column_name2)'

'Example'
create table studd(sid int,sname varchar(20),city varchar(20))

create procedure studd_procedure1 (@sid int,@sname varchar(20),@city varchar(20))
as
insert into studd values(@sid,@sname,@city)

exec studd_procedure1 101,'aa','dd'
exec studd_procedure1 102,'ab','ff'
exec studd_procedure1 103,'ac','hh'
select * from studd
drop table studd

'select'
create procedure
Selectsa1 as
select * from studd

exec Selectsa1

'Select procedure with one parameter'

create procedure studd12 @city varchar(20)
as
select * from studd where city=@city

Exec studd12 @city='ff'

'Stored Procedure with multiple parameters'

create procedure studd21 @sname varchar(20),@city varchar(20)
as
select * from studd where sname=@sname and city=@city

Exec studd21 @sname='aa',@city='dd'

'OutPut Parameters'

create table Employees(Empid int identity(1,1),EmpName varchar(500))
Insert into Employees values('David')
Insert into Employees values('James')
select * from Employees

create procedure NewEmps
(@Ename varchar(500),@Eid int output)
as
Begin
set NOCOUNT on
insert into Employees (EmpName) values (@Ename)
select @Eid = SCOPE_IDENTITY()
End

declare @EmpId int
Exec NewEmps 'David',@EmpId output
select @EmpId

declare @EmpId2 int
Exec NewEmps 'James',@EmpId2 output
select @EmpId2 as Empid

