'Database Creation:

create database database name'

create database roja
use roja
'Sql - Structured Query Language

Definition:
Structured Query Language is a database for easily create, inert, delete, select and update commands

Types of Languages:

1.DDL - Data Definition Language     (Commands: Create,Alter,Drop)
2.DML - Data Manipulation Language   (Commands: Select,Insert,Update and Delete)
3.DCL - Data Control Language        (Commands: Grant and Revoke)
4.TCL - Transaction Control Language (Commands: Commit and Rollback)'

' Data Defintion Language

1.Syntax for Create:

create table tablename(columnname1 datatype,columnname2 datatype)

2.Syntax for Alter:

1.Alter(add column)
2.Alter(drop column)

Alter(add column):
Alter table tablename add columnname datatype 

Alter(drop column):
Alter table tablename drop column columnname

3. Syntax for Drop Command:
Drop table Tablename

Example:'

create table Employee(Eno int, Ename varchar(20),salary int)
select * from Employee

Alter table Employee add dept varchar(20)
Alter table Employee drop column salary
drop table Employee


--DML (Insert, select ,Update, Delete)

'Syntax for Insert Command:

Insert into tablename values(value1,value2 .... value n)
Insert into tablename (columnname1,columnname2 ... columnnamen) values (value1,value2 .... value n)'

'Example'

Insert into Employee values(11,'Ria',25000,'it')
Insert into Employee values(12,'Lara',35000,'CSE')
Insert into Employee values(13,'Ravi',45000,'hr')
Insert into Employee (Eno,Ename,salary) values (14,'devi',26000)
Insert into Employee (Eno,Ename) values (15,'rose')

'Syntax for Select using Where cluase

select * from tablename where columname=value
select comunname1,columname2 from tablename'

'Example'
select * from Employee where Eno=14
select Ename,salary from Employee

'Syntax for Select using order by 

select * from tablename order by columnname desc'

'Example'
select * from Employee order by salary
select * from Employee order by salary desc


'Syntax for Update command

Update tablename set columname=value where columnname=value' -- single column updation using where condition
'Update tablename set columnname=value' -- multiple column updation 

'Example'

Update Employee set salary = 50000 where Eno= 15
select * from Employee

Update Employee set Ename='john' 

'Syntax for Delete Command

Delete from tablename where columnname=value' -- single row delete using where condition
'Delete from tablename' -- Multiple rows deleted

'Example'

delete from Employee where Eno=11
select * from Employee
delete from Employee











