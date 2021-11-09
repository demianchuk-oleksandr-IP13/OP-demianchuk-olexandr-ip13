from os import system
import math

print("The list of three-digit numbers, which are equal to the sum of their digits, powered to 3:")

for hundred in range(1, 10):
    for ten in range(0, 10):
        for one in range(0, 10):
            sum = pow(hundred, 3) + pow(ten, 3) + pow(one, 3)
            number = hundred * 100 + ten * 10 + one
            
            if sum == number:
                print(number)