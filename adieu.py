import inflect

p = inflect.engine()

# creating an empty list
list = []

# get user input
while True:
    try:
        name = input("Name: ")
        list.append(name)
        # print(list)
    except EOFError:
        print("\n")
        break

mylist = p.join(list)
print("Adieu, adieu, to", mylist)