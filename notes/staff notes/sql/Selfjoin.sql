create table Customers(Id int identity(1,1), Name varchar(20),Age int,Address varchar(30),Salary money)
insert into Customers values 1('Ramesh',32,'Ahemedhabad',2000)
insert into Customers values 2('Khilan',25,'Delhi',1500)
insert into Customers values 3('Kaushik',23,'Kota',2000)
insert into Customers values 4('Chaitali',25,'Mumbai',6500)
insert into Customers values 5('Hardik',27,'Bhopal',8500)
insert into Customers values 6('Komal',22,'MP',4500)
insert into Customers values 7('Muffy',24,'Indore',10000)
select * from Customers
drop table Customers

--SELF JOIN--

select a.Id,b.Name,a.Salary from Customers a,Customers b where a.Salary<b.Salary