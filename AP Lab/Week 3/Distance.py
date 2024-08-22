# -*- coding: utf-8 -*-
"""
Created on Thu Aug 22 2024

@author: Hitansh
"""
vertical = 0
horizontal = 0
while True:
    di, steps = input().split()
    steps = int(steps)
    if di == "UP":
        vertical -= steps
    elif di == "DOWN":
        vertical += steps
    elif di == "LEFT":
        horizontal -= steps
    elif di == "RIGHT":
        horizontal += steps
    else:
        break

print("Final Position:", horizontal, ",", vertical)

distance = int(round(((vertical ** 2) + (horizontal ** 2))**(0.5), 0))

print("Distance from origin:", distance)