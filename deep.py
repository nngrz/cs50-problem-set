# get input
text = input("What is the Answer to the Great Question of Life, the Universe, and Everthing? ").casefold().strip()

#print output
if text == "42" or text == "forty-two" or text == "forty two":
    print("Yes")
else:
    print("No")
