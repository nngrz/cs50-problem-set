# get user coin
due = 50
print ("Amount Due: 50")

while due > 0:
    coins = int(input("Insert Coin: "))
    
    if coins == 25 or coins == 10 or coins == 5:
        due = due - coins
        if due > 0:
            print("Amount Due:", due)
        else: 
            print("Change Owed:", abs(due))
    else:
        print("Amount Due:", due)


        
       

