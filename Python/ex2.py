__name__ == '__main__'
if __name__ == '__main__':
    n = int(input("Enter a number:"))
    if n%2==0:
        print("Weird")
    elif (n%2==0 and n in [2,3,4,5]):
        print("Not Weird")
    elif (n%2==0 and n in [6,7,8,9,10,11,12,13,14,15,16,17,18,19,20]):
        print("Weird")
    elif (n%2==0 and n>20):
        print("Not Weird")
    else:
        print("Invalid input")