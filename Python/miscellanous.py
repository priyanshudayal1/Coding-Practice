print("hello world")
while True:
    n=input("Enter your name:")
    print("Hello bhai ",n)
    b=input("do you want to exit press Y or N:")
    if (b=="Y" or b=="y"):
        print("Exited")
        break
l=[]
for i in range(0,5):
    a=int(input("Enter any number:"))
    l.append(a)

print("The list of numbers is:")
print(l)
s=0
for j in range(5):
    
    s=s+l[j]
print("The sum of the numbers is :",s)

