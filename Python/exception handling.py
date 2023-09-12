try:
    a=int(input("Enter a number:"))
    b=7/a
    print(b)
except:
    print("This is a wrong input.")
finally:
    print("Always run")