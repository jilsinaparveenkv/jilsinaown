#accept a file name from user and print extension of that
filename = input("input the filename: ")
f_extns = filename.split(".")
print ("The extension of the file is : " + repr(f_extns[-1]))
