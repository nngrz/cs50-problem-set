# get input
greet = input("Greeting: ").lstrip().casefold()

# print output
if greet.startswith("hello"):
    print("$0")
elif greet.startswith("h"):
    print("$20")
else:
    print("$100")  