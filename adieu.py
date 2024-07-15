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

# join words into a list
# for example: mylist = join(("apple", "banana", "carrot"))
       # "apple, banana, and carrot"
mylist = p.join(list)
print("Adieu, adieu, to", mylist)
