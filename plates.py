import string

def main():
    plate = input("Plate: ")
    if is_valid(plate):
        print("Valid")
    else:
        print("Invalid")

def is_valid(s):
    # print("is_first_two_letter:", is_first_two_letter(s))
    # print("is_length:", is_length(s))
    # print("is_middle_letter", is_middle_letter(s))
    # print("is_first_number", is_first_number(s))
    # print("is_punctuation", is_punctuation(s))
    if  (is_first_two_letter(s) and
        is_length(s) and
        is_middle_letter(s) and 
        is_first_number(s) and
        is_punctuation(s)):
        return True
    else:
        return False

#  start with at least two letters
def is_first_two_letter(s):
    return s[0:2].isalpha()

# 2 <= length <= 6
def is_length(s):
    return 2 <= len(s) <= 6

# number must come at the end
def is_middle_letter(s):
    for c in range(len(s)):
        if s[c].isdigit():
            if not s[c:].isdigit():
                return False
    return True

# the first number used cannot be a '0'
def is_first_number(s):
    for n in s:
        if n.isnumeric():
            if n != "0":
                return True
            else:
                return False
    return True

# no period, spaces, or punctuation
def is_punctuation(s):
    disallowed_c = set(string.punctuation + " ")
    for n in s:
        if n in disallowed_c:
            return False
    return True

main()
