# -*- coding: utf-8 -*-
"""
Created on Thu Aug 22 2024

@author: Hitansh
"""

def binary_search(arr, x):
    low = 0
    high = len(arr) - 1
    while low <= high:
        mid = (high + low) // 2
        if arr[mid] < x:
            low = mid + 1
        elif arr[mid] > x:
            high = mid - 1
        else:
            return mid
    return -1

arr = [2, 3, 4, 10, 40]
x = int(input("Enter element to be searched: "))
result = binary_search(arr, x)
if result != -1:
    print("Element is present at index", result)
else:
    print("Element is not present in array")