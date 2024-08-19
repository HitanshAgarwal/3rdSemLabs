# -*- coding: utf-8 -*-
"""
Created on Thu Aug  8 14:48:43 2024

@author: Hitansh
"""

import sys

def _strin(arr):
    
    count = 0
    
    for i in arr:
        if len(i) >= 2:
            if i[0] == i[-1]:
                count+=1
                print(i)
    return count
                

if __name__ == '__main__':
    string_list = {'hitansh', 'vedant', 'aryaman', 'it', 'what', 'how', 'that', 'a', 'lmao', 'this', 'an', 'then', 'there', 'here', 'bob'}
    print("List of strings used: ", string_list)
    count = _strin(string_list)
    print("Number of strings with more than 2 letters which end and start with the same letter: ", count)