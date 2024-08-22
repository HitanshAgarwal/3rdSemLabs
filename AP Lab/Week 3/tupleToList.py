# -*- coding: utf-8 -*-
"""
Created on Thu Aug 22 2024

@author: Hitansh
"""

tup1 = (10, 20, 30, 40)

ls = []
indx = 0
for i in range(len(tup1) - 1):
    ls.append(tup1[i + 1])

ls.append(None)
print(ls)