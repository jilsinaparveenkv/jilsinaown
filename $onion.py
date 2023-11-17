#Replacement of a string
n=input("enter a string:")
k="$"
res=n[0]+n[1:].replace(n[0],k)
print("replace string is:",(res))
