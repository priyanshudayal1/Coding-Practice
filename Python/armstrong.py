n=int(input("Enter any number:"))
nn=n
s=0
r=0
while n!=0:
    r=n%10
    s=s+((n%10)**3)
    n=n/10
if s==nn:
    print("It is an armstrong number")
else:
    print("It is not an armstrong number")