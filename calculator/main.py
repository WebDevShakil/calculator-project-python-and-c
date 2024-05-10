import math

def add(x, y):
    return x + y

def subtract(x, y):
    return x - y

def multiply(x, y):
    return x * y

def divide(x, y):
    if y == 0:
        return "Error! Division by zero."
    else:
        return x / y

def power(x, y):
    return x ** y

def square_root(x):
    return math.sqrt(x)

def logarithm(x, base=10):
    return math.log(x, base)

def sine(x):
    return math.sin(x)

def cosine(x):
    return math.cos(x)

def tangent(x):
    return math.tan(x)
def main():
    print("----------------------------------------------------")
    print("----------------------------------------------------")
    print("Welcome to  Calculator!")
    print("Select operation:")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    print("5. Power")
    print("6. Square Root")
    print("7. Logarithm")
    print("8. Sine")
    print("9. Cosine")
    print("10. Tangent")
    print("----------------------------------------------------")
    print("----------------------------------------------------")
    choice = input("\nEnter choice (1-10): ")

    if choice in ['1', '2', '3', '4', '5']:
        num1 = float(input("Enter first number: "))
        num2 = float(input("Enter second number: "))
        
        if choice == '1':
            print("Result:", add(num1, num2))
        elif choice == '2':
            print("Result:", subtract(num1, num2))
        elif choice == '3':
            print("Result:", multiply(num1, num2))
        elif choice == '4':
            print("Result:", divide(num1, num2))
        elif choice == '5':
            print("Result:", power(num1, num2))
    elif choice in ['6', '7', '8', '9', '10']:
        num = float(input("Enter a number: "))
        
        if choice == '6':
            print("Result:", square_root(num))
        elif choice == '7':
            base = float(input("Enter base (default is 10): "))
            print("Result:", logarithm(num, base))
        elif choice == '8':
            print("Result:", sine(num))
        elif choice == '9':
            print("Result:", cosine(num))
        elif choice == '10':
            print("Result:", tangent(num))
    else:
        print("Invalid input. Please enter a number between 1 and 10.")

if __name__ == "__main__":
    main()