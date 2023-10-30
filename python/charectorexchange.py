#create a sring from a given string where first and last charectors exchanged
text = input('enter a string:')
newtext=text[-1]+text[1:-1]+text[0]
print('new string:',newtext)
