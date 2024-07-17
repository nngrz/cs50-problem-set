import json
import sys
import requests

# check if there is one command-line argument
if len(sys.argv) != 2:
    sys.exit("Missing command-line argument")

# convert argument to float
try:
    num_bitcoins = float(sys.argv[1])
    try:
        # make request to the CoinDesk Bitcoin Price Index
        response = requests.get("https://api.coindesk.com/v1/bpi/currentprice.json")
        # store JSON object
        rate = response.json()
        amount = num_bitcoins * rate["bpi"]["USD"]["rate_float"]
        print(f"${amount:,.4f}")
    except requests.RequestException:
        print("HTTP Error")
# if argument cannot be converted to a float
except ValueError:
    sys.exit("Command-line argument is not a number")
