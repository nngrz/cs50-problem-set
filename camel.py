# get camelCase

s = input("camelCase: ")

snake_case = ""

for c in s:

    if c.isupper():
        snake_case += "_" + c.lower()

    else:
        snake_case += c

print(snake_case)
