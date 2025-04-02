# -*- coding: utf-8 -*-
"""
Created on Thu Aug 18 13:19:58 2022

@author: admin
"""

rows = int(input("Enter Numbers Pyramid Pattern Rows = "))

print("====The Pyramid of Numbers Pattern====")

for i in range(1, rows + 1):
    for j in range(rows, i, -1):
        print(end = ' ')
    for k in range(1, i + 1):
        print(i, end = ' ')
    print()