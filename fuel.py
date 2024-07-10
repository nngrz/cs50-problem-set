while True:
    try:
        # get x and y
        x, y = input("Fraction: ").split("/")
        x = int(x)
        y = int(y)

        percentage = round((x / y) * 100)
        if percentage <= 1:
            print("E")
        elif percentage >= 99:
            print("F")
        else:
            print(f"{percentage}%")

        if x > y or y == 0:
            raise ValueError
        
        break

    except(ValueError, ZeroDivisionError):
        pass

