# -*- coding: utf-8 -*-
"""
Created on Thu Aug 18 13:37:21 2022

@author: admin
"""

minimum = int(input(" Please Enter the Minimum Value: "))
maximum = int(input(" Please Enter the Maximum Value: "))

for Number in range (minimum, maximum + 1):
    count = 0
    for i in range(2, (Number//2 + 1)):
        if(Number % i == 0):
            count = count + 1
            break

    if (count == 0 and Number != 1):
        print(" %d" %Number, end = '  ')