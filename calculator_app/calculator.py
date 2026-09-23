def add(x, y):
    return x + y

def subtract(x, y):
    return x - y

def multiply(x, y):
    return x * y

def divide(x, y):
    if y == 0:
        return "Error! Division by zero."
    return x / y

def main():
    print("Welcome to Python Calculator!")
    print("Select operation: +, -, *, /")
    
    choice = input("Enter choice (+/-/*//): ")
    
    num1 = float(input("Enter first number: "))
    num2 = float(input("Enter second number: "))
    
    if choice == '+':
        print(f"{num1} + {num2} = {add(num1, num2)}")
    elif choice == '-':
        print(f"{num1} - {num2} = {subtract(num1, num2)}")
    elif choice == '*':
        print(f"{num1} * {num2} = {multiply(num1, num2)}")
    elif choice == '/':
        print(f"{num1} / {num2} = {divide(num1, num2)}")
    else:
        print("Invalid input")

if __name__ == "__main__":
    main()
