--Operators--

'Types of Operators:

1.Comparison operators:!=,<>,<,>,<=,=>,=
2.Range operators: Between, Not Between
3.List operators: in, not in
4.Wild characters: %,-,[],[^]
5.String operator: Like,Not Like
6.UnKnown values: Null,Not Null
7.Logical operators: AND,OR,NOT

Example:'
create table aemp(eno int identity(1,1),ename varchar(20),city char(10),desg varchar(20),salary int)
insert into aemp values('siva','chennai','Hr',8000)
insert into aemp values('mani','chennai','Hr',4000)
insert into aemp values('ravi','chennai','TL',5000)
insert into aemp values('somu','chennai','TL',7000)
insert into aemp values('samy','chennai','Hr',9000)
insert into aemp values('chitra','chennai','TL',10000)
insert into aemp values('Anbu','chennai','TL',12000)
insert into aemp values(null,'chennai','Prg',15000)
select * from aemp
drop table aemp

--1.Comparison Operator:--

select * from aemp where eno !=3
select * from aemp where eno<>5
select * from aemp where eno=2
select * from aemp where eno<=5
select * from aemp where eno>=2
select * from aemp where eno<6
select * from aemp where eno>3
select * from aemp where eno=1

--2.Range Operator:--
select * from aemp where salary not between 7000 and 9000
select * from aemp where salary between 7000 and 10000

--3.List Operators:--
select * from aemp where desg not in('Hr')
select * from aemp where desg in ('Hr','TL')
select * from aemp where desg='Hr' or desg='MG'
select * from aemp where desg='Hr' and desg='TL'

--4.Wild characters:--
'% -> Zero, one or more
-  -> Any one character
[] -> Any single charcter within a specified range
[^] -> Any single character not in the specified range'

--5.String Operator: Like, not like--
select * from aemp where ename like '[a-e]%'
select * from aemp where ename not like'[a-e]%'
select * from aemp where ename like '[^r-t]%'
select * from aemp where ename not like '[^r-t]%'
select * from aemp where ename like '_a%'
select * from aemp where ename like 'a%'


--6.UnKnown values: Null,Not NULL--
select * from aemp where ename is null
select * from aemp where ename is not null

--7.Logical Operators: AND,OR,NOT--
select * from aemp where not(ename like 'a%' or salary<4000)
select * from aemp where (ename like 'a%' or salary<8000)
select * from aemp where not(ename like 'a%' and salary<15000)
select * from aemp where (ename like 'a%' and salary<15000)
