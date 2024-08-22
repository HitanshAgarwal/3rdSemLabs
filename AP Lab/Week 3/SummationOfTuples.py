# -*- coding: utf-8 -*-
"""
Created on Thu Aug 22 2024

@author: Hitansh
"""

ls = [(1, 2), (3, 4), (5, 6)]

summation = 0

for t in range(len(ls)):
    for i in range(len(ls[t])):
        for j in range(len(ls)):
            for k in range(len(ls[j])):
                if t <= j and i != k:
                    summation += (ls[t][i] + ls[j][k])

print("Summation of tuples:", summation)