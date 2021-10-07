# coding=utf-8
import math
x = float(input("enter the value of x:"))
y = float(input("enter the value of y:"))
if x/2 < y <= math.sqrt(x * 4 - math.pow(x, 2)):
    print("The point belongs to the area")
else:
    print("The point does NOT belong to the area")
