# -*- coding: utf-8 -*-
"""
Created on Thu Aug 22 2024

@author: Hitansh
"""

import sys

power = int(input("Enter the power to be found: "))
answer = 1
i = 0
while i < power:
    answer *= 2
    i += 1
print(answer)