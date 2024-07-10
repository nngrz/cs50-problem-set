# creating an empty list
list = []

# get user input
while True:
    try:
        item = input("").upper()
        list.append(item)
        # print(list)
    except EOFError:
        print("\n")
        break

# sort the list
sorted_list = sorted(set(list))  
# print(sorted_list)

for item in sorted_list:
    print(f"{list.count(item)} {item}")
