# -*- coding: utf-8 -*-
"""
Created on Thu Aug  8 15:33:13 2024

@author: Hitansh
"""

import sys
import random

def _rotate(arr, shift):
    
    temparr = arr[len(arr) - shift::1]
    print(temparr)
    rand = 0
    for rand in range(0, shift):
        temp = arr[rand]
        for i in range(0, len(arr) - shift, shift):
            temp2 = arr[i + shift + rand]
            arr[i + shift + rand] = temp
            temp = temp2
    for i in range(shift):
        arr[i] = temparr[i]
    
    return arr
            
    
            
if __name__ == '__main__':
    rand_list = []
    n = 15
    for i in range(n):
        rand_list.append(random.randint(1, 50))
    
    print("Original List", rand_list)
    
    n = int(input("Enter a number: "))
    ans = _rotate(rand_list, n)
    print("Rotated: ", ans)