#print out all colors from color_list not contained in color_list 2
color_list_1 = set(["white","black","red"])
color_list_2 = set(["red","green"])
print(color_list_1.difference(color_list_2))
