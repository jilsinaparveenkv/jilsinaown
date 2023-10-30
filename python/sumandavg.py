#sum and avg of n nymbers
num = int (input("enter number"))
sum = 0
avg = 0
for num in range(1,num+1,1):
    sum=sum+num
    avg=sum/num
print("sum of first n numbers:",sum)
print("average of numbers:",avg)
