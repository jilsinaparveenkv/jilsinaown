#dictionary that contains a number in the form (x,x*x)
n=int(input("type a number"))
d=dict()
for x in range(1,n+1):
    d[x]=x*x
    print(d)
