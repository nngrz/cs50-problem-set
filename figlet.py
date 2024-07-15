import sys
import random
from pyfiglet import Figlet

# we use Figlet to change the font 
figlet = Figlet()
# if zero argument
if len(sys.argv) == 1:
    font = random.choice(figlet.getFonts())
# if two arguments
elif len(sys.argv) == 3 and sys.argv[1] == "-f" or sys.argv[1] == "--font":
    font = sys.argv[2]
    if sys.argv[2] not in figlet.getFonts():
        sys.exit("Error: Invalid font name.")
else:
    sys.exit("Invalid usage.")

# set font
figlet.setFont(font = font)

# prompts the user for a str
str = input("Input: ")

# output
print("Output:", figlet.renderText(str))
