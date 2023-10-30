#creat a single string repeated with space from 2 strings by swapping the charector at position one
a = 'abc'
b = 'XYZ'
print("Before swap:",a," ",b)
a1 = b[:2] + a[2:]
b1 = a[:2] + b[2:]
print("After swap:",a1," ",b1)
