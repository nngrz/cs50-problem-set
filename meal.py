def main():
    time = input("What time is it? ")

    hours = convert(time)

    if 7.0 <= hours <= 8.0:
        print("breakfast time")
    elif 12.0 <= hours <= 13.0:
        print("lunch time")
    elif 18.0 <= hours <= 19.0:
        print("dinner time")

def convert(time):
    # if 12-hour times
    if "a.m." in time or "p.m." in time:
        # get time and suffix (a.m. and p.m.) seperately
        time, suffix = time.split()
        # then seperate hours and minutes
        hours, minutes = time.split(":")
    
        hours = int(hours)
        minutes = int(minutes)
        # if is a.m. and the hours is 12
        if suffix == "p.m." and hours == 12:
            hours = 0
        #if is p.m., add 12
        elif suffix == "p.m." and hours != 12:
            hours = hours + 12

    else:
        hours, minutes = time.split(":")
        hours = int(hours)
        minutes = int(minutes)

    return hours + (minutes / 60.0)

if __name__ == "__main__":
    main()