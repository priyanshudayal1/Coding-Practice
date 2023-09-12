while True:
    a="""MENU
    Welcome to the calculator
    press 1-Additon 
    2-Subtraction
    3-Multiplication
    4-Division"""
    print(a)
    x=int(input("Enter the first number:"))
    y=int(input("Enter the second number:"))
    n=int(input("Enter your choice:"))
    if n==1:
        r=x+y
        print(r)
    elif n==2:
        r=x-y
        print(r)
    elif n==3:
        r=x*y
        print(r)
    elif n==4:
        r=x/y
        print(r)
    else:
        print("Invalid input try again")
    
    print("Do you want to continue(Y/N):")
    v=input("enter")
    if v in ('y' or 'Y'):
        continue
    else:
        print("Successfully Exitted.")
        break