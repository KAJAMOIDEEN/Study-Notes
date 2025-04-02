create table employee(
  empid int primary key auto_increment,
  empName varchar(255) not null,
  empDesg varchar(255) not null,
  empSal double check (empSal>10000.00),
  empJoiningDate date,
  empCity varchar(155) default 'chennai'
  );
  
use sample;
  
insert into employee(empName,empDesg,empSal,empJoiningDate) 
       values('Sam','Software Engineer',25000.00,'2022-02-10');

insert into employee(empName,empDesg,empSal,empJoiningDate,empCity) 
values('ajith','Tech Lead',35000.00,'2021-03-11','bangalore'),
       ('Sam','Software Engineer',25000.00,'2022-02-10'),
        ('Sam','Software Engineer',25000.00,'2022-02-10');
       
select * from employee; 
       