# -*- coding: utf-8 -*-
"""
Created on Thu Aug  8 14:34:24 2024

@author: Hitansh
"""

import sys
import random


def _freq(arr):
    
    maximum = 1
    max_var = arr[0]
    
    freq = 0
    
    for i in range(len(arr)):
        for j in range(len(arr)):
            if arr[i] == arr[j] and i != j:
                freq+=1
            if maximum <= freq:
                max_var = arr[i]
                maximum = freq
                
    return max_var
                
    
if __name__ == '__main__':
    rand_list = []
    n = 25
    for i in range(n):
        rand_list.append(random.randint(1, 5))
    max_var = _freq(rand_list)
    print("List: " , rand_list)
    print("Max frequency variable: " , max_var)