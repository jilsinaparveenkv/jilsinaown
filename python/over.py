#promtt the user for a list of integers for all values >100 store"over"instead
a=int(input("enter the limit of list:"))
i=0
list=[]
while i<a:
    z=int(input("enter a number"))
    if z>100:
        list.append("over")
    else:
        list.append(z)
    i=i+1
    print(list)
   

