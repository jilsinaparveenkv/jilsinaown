#count the number of occurent of a word in a line of text
a=str(input("enter a string:"))
b=str(input("Enter the word u want to count:"))
ls=a.split()
count=0
for n in ls:
    if n==b:
        count=count+1
print("number of",n,"is",count)
