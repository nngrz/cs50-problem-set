import random

# get user input level
while True:
    try:
        level = int(input("Level: "))
        if level > 0:
            break
    except ValueError:
        pass

# generate an integer between 1 and n
number = random.randint(1, level)
# print(number)

while True: 
    try:
        # get user guess
        user_guess = int(input("Guess: "))
        if user_guess <= 0:
            raise ValueError
        if user_guess < number:
            print("Too small!")
        elif user_guess > number:
            print("Too large!")
        else:
            print("Just right!")
            break   

    # ValueError
    except(ValueError):
        pass
