# -*- coding: utf-8 -*-
"""
Created on Thu Aug 18 13:39:01 2022

@author: admin
"""

minimum = int(input(" Please Enter the Minimum Value: "))
maximum = int(input(" Please Enter the Maximum Value: "))
total = 0

Number = minimum

while(Number <= maximum):
    count = 0
    i = 2
    
    while(i <= Number//2):
        if(Number % i == 0):
            count = count + 1
            break
        i = i + 1

    if (count == 0 and Number != 1):
        print(" %d" %Number, end = '  ')
        total = total + Number
    Number = Number  + 1
        
print("\n\nSum = %d" %total)