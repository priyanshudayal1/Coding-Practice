l=[10,1,20,3,30,60,70,80,70,900]
s=0
for i in l:
    s=s+i

print(s)



a=['hello','a',30,500,3.14,201.11]
b=[]
c=[]
d=[]
for i in a:
    if type(i)==str:
        b.append(i)
    elif type(i)==int:
        c.append(i)
    elif type(i)==float:
        d.append(i)

print("Type==string",b)
print("Type==integer",c)
print("Type==float",d)

t=(36,28,16,17,11,7,9,10)
for j in t:
    print(j,end="\t")
print("\n")
d={1:'A',2:'B',3:'C'}
print("Key\t","Values")
for k in d:
    print(k,"\t",d[k],sep="\t")
l3=[1,2,3,4,5]
print(l3.pop(2))