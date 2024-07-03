x, y, z = input("Expression: ").split(" ")

x = float(int(x))
z = float(int(z))

if y == "+":
    print(x + z)
elif y == "-":
    print(x - z)
elif y == "*":
    print(x * z)
elif y == "/":
    print(x / z)

