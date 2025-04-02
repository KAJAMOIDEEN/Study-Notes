# -*- coding: utf-8 -*-
"""
Created on Thu Aug 18 13:26:30 2022

@author: admin
"""

rows = int(input("Enter Pyramid Pattern Rows = "))

print("Pyramid Star Pattern") 

for i in range(0, rows):
    for j in range(0, rows - i - 1):
        print(end = ' ')
    for k in range(0, i + 1):
        print('*', end = ' ')
    print()