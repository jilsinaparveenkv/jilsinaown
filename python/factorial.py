#factorial of a number
n = int(input("enter a number:"))
factorial=1
if n>=1:
    for i in range(1,n+1):
        factorial=factorial*i
    print("factorial of the given number:",factorial)
