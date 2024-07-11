money = float(input("Enter your amount: "))
years = float(input("How many years: "))
interest_rate = float(0.02)
tyears = money * (1 + interest_rate) ** years

print(f"Your money {money} in {years} years with an interest rate of 2% per year is {tyears}")
