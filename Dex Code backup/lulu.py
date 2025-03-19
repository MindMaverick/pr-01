from tabulate import tabulate

# Create a list of rows for the table. Each row represents a transaction or a balance snapshot.
table = [
    ["Balances, May 1 (after Investment)", 7000, 0, 0, 0, 0, 0, 7000, 0, 0, 0],
    ["May 2: Paid office rent $900", -900, 0, 0, 0, 0, 0, 0, 0, 0, 900],
    ["Balances after May 2", 6100, 0, 0, 0, 0, 0, 7000, 0, 0, 900],
    ["May 3: Purchased supplies $800 on account", 0, 0, 800, 0, 800, 0, 0, 0, 0, 0],
    ["Balances after May 3", 6100, 0, 800, 0, 800, 0, 7000, 0, 0, 900],
    ["May 5: Paid $125 for advertising", -125, 0, 0, 0, 0, 0, 0, 0, 0, 125],
    ["Balances after May 5", 5975, 0, 800, 0, 800, 0, 7000, 0, 0, 1025],
    ["May 9: Received $4,000 cash for services", 4000, 0, 0, 0, 0, 0, 0, 0, 4000, 0],
    ["Balances after May 9", 9975, 0, 800, 0, 800, 0, 7000, 0, 4000, 1025],
    ["May 12: Withdrew $1,000 for personal use", -1000, 0, 0, 0, 0, 0, 0, 1000, 0, 0],
    ["Balances after May 12", 8975, 0, 800, 0, 800, 0, 7000, 1000, 4000, 1025],
    ["May 15: Performed services on account $6,400", 0, 6400, 0, 0, 0, 0, 0, 0, 6400, 0],
    ["Balances after May 15", 8975, 6400, 800, 0, 800, 0, 7000, 1000, 10400, 1025],
    ["May 17: Paid employee salaries $2,500", -2500, 0, 0, 0, 0, 0, 0, 0, 0, 2500],
    ["Balances after May 17", 6475, 6400, 800, 0, 800, 0, 7000, 1000, 10400, 3525],
    ["May 20: Partial payment for supplies $600", -600, 0, 0, 0, -600, 0, 0, 0, 0, 0],
    ["Balances after May 20", 5875, 6400, 800, 0, 200, 0, 7000, 1000, 10400, 3525],
    ["May 23: Collected $4,000 on account", 4000, -4000, 0, 0, 0, 0, 0, 0, 0, 0],
    ["Balances after May 23", 9875, 2400, 800, 0, 200, 0, 7000, 1000, 10400, 3525],
    ["May 26: Borrowed $5,000 from bank", 5000, 0, 0, 0, 0, 5000, 0, 0, 0, 0],
    ["Balances after May 26", 14875, 2400, 800, 0, 200, 5000, 7000, 1000, 10400, 3525],
    ["May 29: Purchased equipment $4,200 on account", 0, 0, 0, 4200, 4200, 0, 0, 0, 0, 0],
    ["Balances after May 29", 14875, 2400, 800, 4200, 4400, 5000, 7000, 1000, 10400, 3525],
    ["May 30: Paid utilities $275", -275, 0, 0, 0, 0, 0, 0, 0, 0, 275],
    ["Final Balances, May 31", 14600, 2400, 800, 4200, 4400, 5000, 7000, 1000, 10400, 3800]
]

# Define headers for the table columns
headers = ["Transaction", "Bank", "A/R", "Supplies", "Equipment", "A/P", "N/P", "Owner's Capital", "Drawings", "Revenues", "Expenses"]

# Print the table in a grid format
print(tabulate(table, headers=headers, tablefmt="grid"))
