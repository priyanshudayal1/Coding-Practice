n=int(input("Enter the no of terms of fibonacci series you want:"))
a=0
b=1
print("The fibonacci series is :")
print(a,"\t",b,end="\t")
for i in range(n-2):
    c=a+b
    print(c,end="\t")
    a=b
    b=c
