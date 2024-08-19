# -*- coding: utf-8 -*-
"""
Created on Thu Aug  8 14:58:54 2024

@author: Hitansh
"""

import sys
import random

def _duplicate(arr):
    deleted = 0
    n = len(arr) - 1
    for i in range(n - deleted):
        for j in range(n - deleted):
            if arr[i] == arr[j] and i != j:
                del arr[j]
                deleted+=1
            if i >= n - deleted:
                return arr
            if j >= n - deleted:
                break

    return arr
    
if __name__ == '__main__':
    rand_list = []
    n = 15
    for i in range(n):
        rand_list.append(random.randint(1, 5))
    
    print("Original List", rand_list)
    arr = _duplicate(rand_list)
    last = arr[-1]
    arr.remove(last)
    print("New list: ", arr)