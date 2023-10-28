def calc(a,b,operation):
    if operation == 'add':
        c = a+b
    elif operation == 'sub':
        c = a-b
    elif operation == 'div':
        c = a/b
    elif operation == 'mul':
        c = a*b
    elif operation == 'expo':
        c = a**b
    return c
a,b = map(int, input("Enter num1 and num2 : ").split())
operation=input("Enter operation: ")
output = calc(a,b,operation)
print(output)
