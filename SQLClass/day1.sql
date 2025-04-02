create database sample;

drop database sample;

use sample;

show tables;

create table employee(
  id int,
  empName varchar(255),
  empDesg varchar(255),
  empSal double,
  empJoiningDate date);
  
alter table employee add empCity varchar(255);

alter table employee drop empCity;

alter table employee modify column id float;
  
select * from employee;
  
drop table employee;



