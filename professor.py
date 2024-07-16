import random

def main():
    level = get_level()
    # print("level:",level)
    score = 0

    # generate the problem 10 times
    for _ in range(10):
        x = generate_integer(level)
        y = generate_integer(level)
        result = x + y

        input_times = 0
        # allow user up to 3 times tries in total
        while input_times < 3:
            try:
                user_result = int(input(f"{x} + {y} = "))
                if user_result == result:
                    score += 1
                    break
                else:
                    print("EEE")
            except ValueError:
                    print("EEE")
                    pass
            input_times += 1

        # if the user has still not answered correctly after three tries, the program should output the correct answer
        if input_times == 3:
            print(f"{x} + {y} = {result}")

    # the number of correct answers out of 10
    print(f"Score: {score}")

def get_level():
    while True:
        try:
            n = int(input("Level: "))
            if n == 1 or n == 2 or n == 3:
                return n
        except ValueError:
            pass
            
def generate_integer(level):
    if level == 1:
        return random.randint(0, 9)
    elif level == 2:
        return random.randint(10, 99)
    elif level == 3:
        return random.randint(100, 999)

if __name__ == "__main__":
    main()
