import sqlite3
con=sqlite3.connect('user.db')
def insertdata(name,age,city):
    qry="insert into user(name,age,city)values(?,?,?);"
    con.execute(qry,(name,age,city))
    con.commit()
    print("user details added")
def updatedata(name,age,city,id):
    qry="update user set name=?,age=?,city=? where id=?"
    con.execute(qry,(name,age,city,id))
    con.commit()
    print("user details updated")
def deletedata(id):
    qry="delete from user where id=?";
    con.execute(qry,(id))
    con.commit()
    print("deleted the user record")
def selectdata():
    qry="select * from user"
    result=con.execute(qry)
    for row in result:
        print(row)

print("""
      1.insert
      2.update
      3.delete
      4.select
      """)        
      
ch=1
while ch==1:
    c=int(input("enter your choice"))      
    if(c==1):
        print("add the new record")
        name=input("enter the name")
        age=input("enter your age")
        city=input("enter your city")
        insertdata(name,age,city)
    elif(c==2):
        print("update the user record")
        id=input("enter the id")
        name=input("enter the name")
        age=input("enter your age")
        city=input("enter your city")
        updatedata(name,age,city,id)
    elif(c==3):
        print("delte the user record")
        id=input("enter the id")
        deletedata(id)
    elif(c==4):
        print("print all the record")
        selectdata()
    else:
        print("invalid selection")
        ch=int(input("enter 1 to continue"))
print("thank you")
    
        
        
