#same length ii),iii))
i=-1
a=[]
b=[]
while i==-1:
    z=int(input("enter a list or '0' to exit:\n"))
    if z==0:
        break;
    else:
        a.append(z)
while i==-1:
    z=int(input("\n enter number to list2 or '0' to exit:\n"))
    if z==0:
        break;
    else:
        b.append(z)
print(a)
print(b)
if len(a)==len(b):
    print("List are same length",len(a))
else:
    print("list 1 is ",len(a),"length and list 2 is of",len(b),"length")
if sum(a)==sum(b):
    print("list have same sum ",sum(a))
else:
    print("list 1 is", sum(a),"sum and list 2 is of",sum(b),"sum")
for n in a:
    for z in b:
        if n==z:
            print(n,"value occure in both list 1 and list2")   
            
