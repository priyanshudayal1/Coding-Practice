a=0
b=1
n=int(input("Enter the nth term of the fibonacci series: "))

print(a,end="\t")
print(b,end="\t")

for i in range(3,n+1):
    c=a+b
    print(c,end="\t")
    a=b
    b=c
