# -*- coding: utf-8 -*-
"""
Created on Thu Aug 22 2024

@author: Hitansh
"""

import sys

str1 = input("Enter first string: ")
str2 = input("Enter second string: ")

print(str1 if len(str1) > len(str2) else ((str1 + str2) if len(str1) == len(str2) else str2))