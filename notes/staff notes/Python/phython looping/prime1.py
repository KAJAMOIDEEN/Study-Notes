# -*- coding: utf-8 -*-
"""
Created on Thu Aug 18 13:34:22 2022

@author: admin
"""

def prime_factors(n):
    i = 2
    while i<=n:
        if n%i==0:
            print(i,  end='   ')
            n = n // i
        else:
            i+=1
    
# Get a number from user
             
num = int(input('Enter a number to find Prime factors:'))

print('The prime factors of ',num,' are: ', end='') 
prime_factors(num)