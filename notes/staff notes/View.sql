use rose

--View--
'Veiw is a virtual table'

--Syntax--
'create view [view_name] as select [column_name] from [table_name] where condition'

create table bemptest(empno int,ename varchar(20),salary int,deptno int)
insert into bemptest values(101,'gayu',10000,10)
insert into bemptest values(102,'raja',11000,20)
insert into bemptest values(103,'ria',8000,30)
insert into bemptest values(104,'sara',90000,40)
insert into bemptest values(105,'Lia',12000,50)
select * from bemptest
drop table bemptest

create view bemptestView1 as select * from bemptest
select * from bemptestView1

create view bemp1 as select * from bemptest where salary<10000
select * from bemp1

drop view bemp1

--Variables--

'Variable is a memory location.It has two types.
1.Local Variable    = @
2. Gloabal Variable = @@

Local Variable : To find within a table is called as local variable'

--Example 1--

declare @name varchar(20)
select @name='Roja'
select @name

--Eample 2--

declare @u_id varchar(20)
select @u_id=102
select @u_id 

--Example 3--

declare @a1 int,@a2 int,@tot int
select @a1=10
select @a2=20
select @tot=@a1+@a2
select @tot

--Example 4--

declare @au_name varchar(20)
set @au_name = (select (au_name) from author where au_id =101)
select @au_name as Select_Name
go

--Example--

create table author(au_name varchar(20),au_id varchar(20))
insert into author values('Roja',101)
insert into author values('Rani',102)
insert into author values('Ravi',103)
select * from author

--Global Variable--

'To find whole table is called as Global variable.'

Select @@version
select @@connections
select @@servername
select @@error
waitfor delay '00:00:05'
select * from author

--Example for if-else---

select * from bemptest

if(select AVG(salary)from bemptest)<8000
begin
update bemptest set salary=salary+1000
print('Good Salary')
end 
else
begin
print('Not Good Salary')
update bemptest set salary=salary-200
end
