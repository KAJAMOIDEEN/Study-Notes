use rose jm                                                                                                                                        
--SET Operators--
'Set Operators combine result of queries into one result. They are
1. Union
2. Union All
3. Intersect
4. minus'

-- 1. Union --
'Union returns all distinct rows selected by either queries.'

create table master1(eno int,ename varchar(10))
insert into master1 values(101,'ravi')
insert into master1 values(102,'mani')
insert into master1 values(104,'siva')
insert into master1 values(108,'rani')
select * from master1

create table master2(eno int,ename varchar(10))
insert into master2 values(101,'anbu')
insert into master2 values(102,'raghu')
insert into master2 values(109,'radha')
insert into master2 values(111,'raju')
select * from master2

select eno from master1 union select eno from master2

--2. Union All--
'Union all returns all rows selected by either queries including duplicate also.'

select eno from master1 union all select eno from master2

--3. Intersect--
'Intersect returns rows selected by common to both queries.'

select eno from master1 intersect select eno from master2

--4. Minus--
'Minus returns rows selected by first query but not second query'

select eno from master1 min select eno from master2

--Index--
'Index is an optional structure associated with a table. It is created for fast performance of data review.'

create table student(sno int,sname varchar(10),scourse varchar(10),splace varchar(10))
insert into student values (101,'ravi','dca','chennai')
insert into student values (102,'mani','msa','chennai')
insert into student values (103,'siva','tally','chennai')
insert into student values (104,'ramu','dca','chennai')
insert into student values (105,'ragu','.net','chennai')
select * from student

create index first_index1 on student(sno)
create index second_index1 on student(sname,splace)


