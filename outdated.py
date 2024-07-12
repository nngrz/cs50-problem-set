list = [
    "January", 
    "February", 
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
]

# get user input
while True:
    try:
        date_user = input("Date: ").strip()
        
        # MM/DD/YYYY format
        if "/" in date_user:
            month, day, year = date_user.split("/")
            month = int(month)
            day = int(day)
            year = int(year)

            if 1<= month <= 12 and 1 <= day <= 31:
                date_formatted = f"{year:04}-{month:02}-{day:02}"
                print(date_formatted)
                break
        
        # month day, year format
        if "," in date_user:
            month_letter, day, year = date_user.split(" ")
            # print("month_letter:", month_letter, "day:", day, "year:", year)
            day = day.rstrip(",")
            # print("day:", day)
            if month_letter in list:
                month = list.index(month_letter) + 1
                day = int(day)
                year = int(year)
                
                if 1 <= day <= 31:
                    date_formatted = f"{year:04}-{month:02}-{day:02}"
                    print(date_formatted)
                    break

    except(ValueError):
        pass
