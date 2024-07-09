# solution 3: True 
# get user input
s = input("Input: ")
vowels = ["A", "a", "E", "e", "I", "i", "O", "o", "U", "u"]

def main():    
    output = ""
    for c in s:
        if not is_vowel(c):
            output += c
    print("Output:", output)

def is_vowel(c):
    return c in vowels

main()

'''
solution 1: without for loop
# get user input
s = input("Input: ")

output = s.replace("A", "").replace("a", "").replace("E", "").replace("e", "").replace("I", "").replace("i", "").replace("O", "").replace("o", "").replace("U", "").replace("u", "")

print("Output:", output)
'''

'''
solution 2: with for loop

# get user input

vowels = ["A", "a", "E", "e", "I", "i", "O", "o", "U", "u"]

output = input("Input: ")

for v in vowels:
    output = output.replace(v, "")

print("Output:", output)
'''
