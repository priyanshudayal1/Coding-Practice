a=input("Enter a word:")
l=list(a)
c=0
for i in l:
    if i in ['a','A','e','E','i','I','o',"u",'O',"U"]:
        c=c+1
print("The number of vowels in the word is :",c)