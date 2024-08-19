# To Perform different operations on the numbers taken as input from the user
num1 = float(input("Enter a number:\n"))
num2 = float(input("Enter another number:\n"))

# Addition
addition =  num1 + num2
print(f"The sum of the two numbers is {addition}")

# Subtraction
subtraction = num1 - num2
print(f"The difference between the two numbers is {subtraction}")

# Multiplication
multiply = num1 * num2
print(f"The product of the two numbers is {multiply}")

# Division
divide = num1 / num2
print(f"The division of the two numbers leads to the answer {divide} ")

# Floor division
f_divide = num1 // num2
print(f"The floor division of the two numbers leads to the answer {f_divide}")

# Exponential to the power of 2
expo = float(input("Enter one number which must be used as the power of prev. two numbers: \n"))
expo1 = num1 ** expo
expo2 = num2 ** expo
print(f"The result of first entered number is {expo1} and that of the second number is {expo2}")

# Modulo operator
rem = float(input("Enter a number to get the remainder of prev. two numbers when divided with this number: \n"))
modulo1 = num1 % rem
modulo2 = num2 % rem
print(f"The remainder of the first number when divided with {rem} is {modulo1} and that of the second number is {modulo2}")
