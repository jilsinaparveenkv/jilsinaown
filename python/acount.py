#store a list of first names count the occurence of a within the list
list=["abdu","suresh","afil","arjun","ammu"]
count=0
print(list)
a=input("enter the letter to find the occurence")
for n in list:
    for f in n:
        if f==a:
            count=count+1
print("number of",a,"is:",count)

