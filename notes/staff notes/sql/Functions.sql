--Functions--

'self contained program.It has 2 types.

1. Predefined function
2. Userdefined function

1. Predefined function:'

--Types of Predefined function--

'1. Mathematical function
2. Trignometric function
3. String function
4. Date function
5. System function
6. Aggregate function'

-- 1. Mathematical function--

'Absolute:'
select ABS(-1)

'Ceiling:'
select ceiling(+74.1)

'Floor:'
select floor(74.6)

'Exponential:'
select exp(8)

'Round:'
select round(74.2848,4)
select round(74.28485,4)

'2.Trignometric function'

select sin(90)
select tan(45)
select cos(45)
select tan(1)
select LOG(10)

'3. String Function'

select ascii('a')
select char(69)
select reverse('sample')
select SUBSTRING('Welcome',1,4)
select stuff('ram',1,2,'sri')
select replicate('good',5)

'4.Date function'

select getdate()
select dateadd(MM,3,GETDATE())
select datediff(yy,'12-02-1988',getdate())
select DAY(getdate())
select MONTH(getdate())
select year(getdate())

'5. System function'

select db_id('roja')
select db_name(189)
select isdate('02-29-2021')
select ISNUMERIC(5)
select suser_id('sa')
select SUSER_NAME(1)
select @@servername

'6. Aggregate function'

select * from student12

select count(*) from student12
select min(fees) from student12
select max(fees) from student12
select AVG(fees) from student12
select SUM(fees) from student12


'Group by:'

'The Group by statement groups row that have the same values into summary rows, like "find the number of customers in each country"'

--Group by Syntax:--

'Select column_name(s)
from tablename where condition GROUP BY column_name(s) order by column_name(s)'

create table Customers (customerId int identity(1,1),customerName varchar(20),contactName varchar(20),country varchar(20))
Insert into Customers values('Raj','rr','Germany')
Insert into Customers values('lekha','rr','Mexico')
Insert into Customers values('rio','rr','Mexico')
Insert into Customers values('lara','rr','UK')
Insert into Customers values('saira','rr','Sweden')
select * from Customers
drop table Customers

select count(customerId),country from Customers
group by country


select count(customerId),country from Customers
group by country order by count(customerId)desc

