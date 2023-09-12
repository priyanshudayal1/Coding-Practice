# Enter your code here. Read input from STDIN. Print output to STDOUT
a=int(input())
#arr=list(map(str,input().split()))
arr=set()
for i in range(a):
    print("Enter city")
    item=input()
    arr.add(item)
s=0
for i in arr:
    s=s+1
print(s)