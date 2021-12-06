def init():
    number = int(input("Enter the number to check every perfect number before it: "))
    return number

def divisors_sum(num):
    sum = 0
    for i in range(1, num): 
        if num % i == 0:
            sum += i
    return sum

def output():
    for k in range(1, number+1):
        sumk = divisors_sum(k)
        if sumk == k:
            print(k)
number = init()
output()