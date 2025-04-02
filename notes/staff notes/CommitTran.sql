create database rose
use rose

Create table Students(Sid int identity(1,1),Sname varchar(10),Sdept varchar(20),Fees int)

Insert into Students values('Rio','IT',12000)
Insert into Students values('Banu','CSE',13000)
Insert into Students values('Vino','ECE',11000)
Insert into Students values('John','EEE',15000)
Select * from Students
drop table Students

'Commit : This commit is used to store the data on the database permanently'

--Syntax--
'Commit'

'Rollback : This command is used to store the data on the database temporarily'

--Syntax--
'Rollback'

--Commit transaction--
'Delete'

Begin tran
delete from Students where sid=3
begin
Commit tran
print 'Record deleted'
end

--Insert--

Begin tran
insert into Students values('Lucky','MCA',4000)
begin
Commit tran
print 'Record inserted'
end

--Update--

Begin tran
update Students set sname = 'Rose' where sid=5
begin
commit tran
print 'Record updated'
end

Select * from Students

--Savepoints--

Begin tran
delete from Students where sid=1
save tran e1

delete from Students where sid=2
save tran e2

delete from Students where sid=5
save tran e3

Select * from Students

Rollback tran e3
Rollback tran e2
Rollback tran e1
Rollback tran
Select * from Students