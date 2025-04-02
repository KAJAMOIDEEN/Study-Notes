use roja
---Triggers--
'Triggers are the sql codes that are automatically executed in response to certain events on a particular table.'

--Syntax--

'create Trigger Trigger_Name
(Before|After)[Insert|Update|Delete}
on [Table_Name]
[for each row|for each column]
[trigger_body]'

--Types of Triggers--

'1. After Triggers
2. Instead of Triggers'

-- 1. After Triggers--

' These triggers run after an insert,update or delete on a table. They are not Supported for views.

After Triggers can be classified in three types:

1. After Insert Trigger
2. After Update Trigger
3. After Delete Trigger'

--Examples--

create table Employee_Test(Emp_Id int identity(101,1),Emp_name varchar(20),Emp_Sal Decimal(10,2))
insert into Employee_Test values('Anees',1000)
insert into Employee_Test values('Rick',1200)
insert into Employee_Test values('John',1100)
insert into Employee_Test values('Stephen',1300)
insert into Employee_Test values('Maria',1400)
select * from Employee_Test
drop table Employee_Test

create table Employee_Test_Audit(Emp_Id int,Emp_name varchar(20),Emp_Sal Decimal(10,2),Audit_Action varchar(100),
Audit_Timestamp datetime)
select * from Employee_Test_Audit
drop table Employee_Test_Audit


--1. After Insert Trigger--

create Trigger trgAfterInsert on 
[dbo].[Employee_Test]
for insert
as
declare @empid int;
declare @empname varchar(20);
declare @empsal decimal(10,2);
declare @audit_action varchar(100);
select @empid=i.Emp_Id from inserted i;
select @empname=i.Emp_name from inserted i;
select @empsal=i.Emp_Sal from inserted i;
set @audit_action = 'Inserted REcord -- After Insert Trigger.';
insert into Employee_Test_Audit(Emp_Id,Emp_name,Emp_Sal,Audit_Action,Audit_Timestamp)
values(@empid,@empname,@empsal,@audit_action,getdate());
Print 'After Insert Trigger fired'
Go

drop trigger trgAfterInsert

insert into Employee_Test values ('Chris',1500)
select * from Employee_Test
select * from Employee_Test_Audit

--After Update Trigger--

create Trigger trgAfterUpdate on
[dbo].[Employee_Test]
for Update
as
declare @empid int;
declare @empname varchar(100);
declare @empsal decimal(10,2);
declare @audit_action varchar(100);
select @empid=i.Emp_Id from inserted i;
select @empname=i.Emp_name from inserted i;
select @empsal=i.Emp_Sal from inserted i;
if update(Emp_name)
set @audit_action = 'Updated Record -- After Update Trigger.';
if update(Emp_Sal)
set @audit_action='Updated Record -- After Update Trigger.';
insert into Employee_Test_Audit(Emp_Id,Emp_name,Emp_Sal,Audit_Action,Audit_Timestamp)
values(@empid,@empname,@empsal,@audit_action,getdate());
Print 'After Update Trigger fired.'
Go

drop trigger trgAfterUpdate

Update Employee_Test set Emp_Sal=1550 where Emp_Id=106
select * from Employee_Test
select * from Employee_Test_Audit

--After Delete Trigger--

create Trigger trgAfterDelete on
[dbo].[Employee_Test]
after delete
as
declare @empid int;
declare @empname varchar(20);
declare @empsal decimal(10,2);
declare @audit_action varchar(100);
select @empid=d.Emp_Id from deleted d;
select @empname = d.Emp_name from deleted d;
select @empsal = d.Emp_Sal from deleted d;
set @audit_action='Deleted -- After Delete Trigger.';
insert into Employee_Test_Audit(Emp_Id,Emp_name,Emp_Sal,Audit_Action,Audit_Timestamp)
values(@empid,@empname,@empsal,@audit_action,getdate());
Print 'After Delete Trigger fired.'
Go

drop trigger trgAfterDelete
delete from Employee_Test where Emp_Id=105
select * from Employee_Test
Select * from Employee_Test_Audit

--Instead Of Triggers--

'Types of Instead Of Triggers

1. Instead of Insert Triggers
2. Instead of Update Triggers
3. Instead of Delete Triggers'

--1.Instead of Insert Triggers--

create trigger trgInsteadOfInsert on 
[dbo].[Employee_Test]
instead of insert
as
declare @emp_id int;
declare @emp_name varchar(100);
declare @emp_sal int;
select @emp_id = i.Emp_Id from inserted i;
select @emp_name = i.Emp_name from inserted i;
select @emp_sal = i.Emp_Sal from inserted i;
insert into Employee_Test_Audit(Emp_Id,Emp_name,Emp_Sal,Audit_Action,Audit_Timestamp)
values(@emp_id,@emp_name,@emp_sal,'Inserted-- Instead Of Insert Trigger.',getdate());
Print 'Record Inserted -- Instead of Insert Trigger.'
Go

drop trigger trgInsteadOfInsert
insert into Employee_Test values ('Jeni',1600)
select * from Employee_Test
select * from Employee_Test_Audit

--2.Instead of Update Trigger--

create trigger trgInsteadOfUpdate on 
[dbo].[Employee_Test]
instead of update
as
declare @emp_id int;
declare @emp_name varchar(100);
declare @emp_sal int;
declare @audit_action varchar(100);
select @emp_id = i.Emp_Id from inserted i;
select @emp_name = i.Emp_name from inserted i;
select @emp_sal = i.Emp_Sal from inserted i;
if update(Emp_name)
set @audit_action = 'Updated Record -- Instead of Update Trigger.';
if update(Emp_Sal)
set @audit_action='Updated Record -- Instead of Update Trigger.';
insert into Employee_Test_Audit(Emp_Id,Emp_name,Emp_Sal,Audit_Action,Audit_Timestamp)
values(@emp_id,@emp_name,@emp_sal,@audit_action,getdate());
Print 'Record Updated -- Instead of Update Trigger.'
Go

drop trigger trgInsteadOfUpdate

Update Employee_Test set Emp_Sal=2550 where Emp_Id=101
select * from Employee_Test
select * from Employee_Test_Audit



--3.Instead of Delete Trigger--

create trigger trgInsteadOfDelete on 
[dbo].[Employee_Test]
instead of delete 
as
declare @emp_id int;
declare @emp_name varchar(100);
declare @emp_sal int;
select @emp_id = d.Emp_Id from deleted d;
select @emp_name = d.Emp_name from deleted d;
select @emp_sal = d.Emp_Sal from deleted d;
Begin
if(@emp_sal>1200)
begin
Raiserror('Cannot delete where salary>1200',16,1);
Rollback;
end
else
begin
delete from Employee_Test where Emp_Id=@emp_id;
Commit;
insert into Employee_Test_Audit(Emp_Id,Emp_name,Emp_Sal,Audit_Action,Audit_Timestamp)
values(@emp_id,@emp_name,@emp_sal,'Deleted -- Instead Of Delete Trigger.',getdate());
Print 'Record Deleted -- Instead of Delete Trigger.'
end
End
Go

drop trigger trgInsteadOfDelete

delete from Employee_Test where Emp_Id=104
delete from Employee_Test where Emp_Id=101
select * from Employee_Test
select * from Employee_Test_Audit

