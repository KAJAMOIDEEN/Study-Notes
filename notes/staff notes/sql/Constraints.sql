use roja
--Constraints

'Constraints is a rule or condtion. It has 6 types of constraints.

1.Primary key constraint
2.Unique constraint
3.Foreign key constraint
4.Check key constraint
5.Default constraint
6.Not Null constraint'

--- Primary Key Constraint

'Primary Key Constraint : It does not allow the repeated values and null values

Syntax:

Constraint [constraintName] primary key(column name)'

-- 3types of Constraint

'1. Column level Constraint
 2. Table Level Constraint
 3. Composite Primary Key'
 
 -- 1. Column Level Constraint
 
 'We declare the Primary Key COnstarint in the first column name is called Column Level Constraint'
 
 -- Example
 
 create table Emp (Eid int constraint p1 primary key ,Ename varchar(20),Designation varchar(20),Salary int)
 Insert into Emp values (101,'aaa','xxx',20000)
 Insert into Emp values (102,'bbb','qqq',40000)
 Insert into Emp values (101,'ccc','ppp',70000)
 Insert into Emp values (103,'aaa','uuu',80000)
 Insert into Emp values (null,'ddd','ggg',50000)
 select * from Emp 
 drop table Emp
 
 --2. Table Level Constraint
 
 'To declare the primary key constraint in any one of the columnname'
 
 --Example
 
 create table Emp1 (Eid int ,Ename varchar(20),Designation varchar(20),Salary int constraint p2 primary key(Ename))
 Insert into Emp1 values (101,'aaa','xxx',20000)
 Insert into Emp1 values (102,null,'qqq',40000)
 Insert into Emp1 values (101,'ccc','ppp',70000)
 Insert into Emp1 values (103,'aaa','uuu',80000)
 Insert into Emp1 values (null,'ddd','ggg',50000)
 select * from Emp1
 drop table Emp1
 
 -- 3. Composite Primary key
 
 ' To declare multiple column names in composite primary key'
 
 --Example
 create table Emp2 (Eid int ,Ename varchar(20),Designation varchar(20),Salary int constraint p3 primary key(Eid,Designation,Salary))
 Insert into Emp2 values (101,'aaa','xxx',20000)
 Insert into Emp2 values (102,null,'qqq',40000)
 Insert into Emp2 values (101,'ccc','ppp',70000)
 Insert into Emp2 values (103,'aaa','uuu',80000)
 Insert into Emp2 values (null,'ddd','ggg',50000)
 Insert into Emp2 values (101,'ccc','ppp',30000)
 Insert into Emp2 values (103,'aaa','uuu',80000)
 select * from Emp2
 drop table Emp2
 
 -----------------------------------------------------------------------------
 
 --- Unique Constraint

'Unique Constraint : It does not allow the repeated values and but it allow Null value only onetime.

Syntax:

Constraint [constraintName] unique(column name)'

-- 3types of Constraint

'1. Column level Constraint
 2. Table Level Constraint
 3. Composite Unique'
 
 -- 1. Column Level Constraint
 
 'We declare the Unique Constraint in the first column name is called Column Level Constraint'
 
 -- Example
 
 create table Empp (Eid int constraint pp unique ,Ename varchar(20),Designation varchar(20),Salary int)
 Insert into Empp values (101,'aaa','xxx',20000)
 Insert into Empp values (102,'bbb','qqq',40000)
 Insert into Empp values (101,'ccc','ppp',70000)
 Insert into Empp values (103,'aaa','uuu',80000)
 Insert into Empp values (null,'ddd','ggg',50000)
 Insert into Empp values (null,'eee','hhh',60000)
 select * from Empp 
 drop table Empp
 --2. Table Level Constraint
 
 'To declare the unique constraint in any one of the columnname'
 
 --Example
 
 create table Empp1 (Eid int ,Ename varchar(20),Designation varchar(20),Salary int constraint ppp unique(Ename))
 Insert into Empp1 values (101,'aaa','xxx',20000)
 Insert into Empp1 values (102,null,'qqq',40000)
 Insert into Empp1 values (101,'ccc','ppp',70000)
 Insert into Empp1 values (103,'aaa','uuu',80000)
 Insert into Empp1 values (null,'ddd','ggg',50000)
 Insert into Empp1 values (104,null,'hhh',60000)
 select * from Empp1
 drop table Empp1
 
 -- 3. Composite Unique Constraint
 
 ' To declare multiple column names in composite constraint'
 
 --Example
 create table Empp2 (Eid int ,Ename varchar(20),Designation varchar(20),Salary int constraint pppp unique(Eid,Designation,Salary))
 Insert into Empp2 values (101,'aaa','xxx',20000)
 Insert into Empp2 values (102,null,'qqq',40000)
 Insert into Empp2 values (101,'ccc','ppp',70000)
 Insert into Empp2 values (103,'aaa','uuu',80000)
 Insert into Empp2 values (null,'ddd','ggg',50000)
 Insert into Empp2 values (101,'ccc','ppp',30000)
 Insert into Empp2 values (103,'aaa','uuu',80000)
 Insert into Empp2 values (103,'aaa','uuu',80000)
 Insert into Empp2 values (null,'aaa','jjj',80000)
 Insert into Empp2 values (null,'aaa','jjj',80000)
 select * from Empp2
 drop table Empp2
 
 --Foreign key Constraint--
 
 'Foreign key is a referenece of the primary key constraint
 
 Syntax:
 Constraint constraint_name reference primarykey tablename(columnname)'
 
 --Example--
 
 create table deptt(dno int constraint aad primary key,dname varchar(20))
 insert into deptt values (101,'physics')
 insert into deptt values (102,'chemistry')
 insert into deptt values (103,'Botany')
 insert into deptt values (101,'Zoology')
  insert into deptt values (null,'Maths')
 select * from deptt
 drop table deptt
 
 create table emps(empid int constraint xx primary key,ename varchar(20),salary int,dno int constraint fk references deptt(dno))
 insert into emps values(101,'xx',20000,101)
 insert into emps values(104,'xx',20000,102)
 insert into emps values(106,'xx',20000,103)
 insert into emps values(101,'xx',20000,102)
 insert into emps values(null,'xx',20000,102)
insert into emps values(103,'xx',20000,105)
select * from emps
drop table emps

--check constraint--

'Check constraint is used to check the values that can be placed in a column

Syntax:
constraint constraint_name check(column_name in (values))'

'Example'

create table emptest(eid int constraint aaas primary key,ename varchar(20),city varchar(20),states varchar(20) constraint ckk check(states in ('TN','AP')))
insert into emptest values(101,'ravi','chennai','TN')
insert into emptest values(102,'mani','chennai','AP')
insert into emptest values(103,'siva','chennai','TN')
insert into emptest values(101,'ravi','chennai','TN')
insert into emptest values(104,'kevin','chennai','KL')
select * from emptest
drop table emptest

--Default Constraint--

'Default Constraint is used to set the default value that can be placed in a column.

Syntax:'
--default 'value'--
create table emptest1(eid int constraint aaas1 primary key,ename varchar(20),city varchar(20) default 'chennai',states varchar(20) constraint ckk1 check(states in ('TN','AP')))
insert into emptest1 values(101,'ravi','chennai','TN')
insert into emptest1 values(102,'mani',default,'AP')
insert into emptest1 values(103,'siva',default,'TN')
insert into emptest1 values(101,'ravi','chennai','TN')
insert into emptest1 values(104,'kevin','chennai','KL')
insert into emptest1(eid,ename,states) values (105,'gayu','AP')
select * from emptest1
drop table emptest1

--Not Null Constraint--

'Not null Constraint does not allow the null values'

'Syntax'
--column name Not Null--

create table stud(sid int Not Null, sname varchar(20),dept varchar(20),fees int Not null )
insert into stud values (12, 'asad','h',2343)
insert into stud values (null, 'gsdg','f',3435)
insert into stud values (13, 'jhhk','h',null)
insert into stud values (null, 'fdhg','t',null)
select * from stud
drop table stud
