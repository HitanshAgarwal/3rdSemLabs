# -*- coding: utf-8 -*-
"""
Created on Thu Aug 22 2024

@author: Hitansh
"""

amount = 0.0
while True:
    c, n = input().split()
    if c == "D":
        amount += int(n)
    elif c == "W":
        amount -= int(n)
    else:
        break

print("Final Amount in bank account:", amount)