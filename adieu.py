import inflect

# we use inflect library to format the list by adding commas between words and "and" in the end
# for example: ["apple", "banana", "carrot"] -> "apple, banana, and carrot"
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
mylist = p.join(list)
print("Adieu, adieu, to", mylist)
