import matplotlib.pyplot as plt
import numpy as np

# Define a range for quantity
Q = np.linspace(0, 1000, 500)

# Define the demand and supply functions
P_d = 6 - 0.005 * Q  # Demand curve
P_s = 2 + 0.003 * Q  # Supply curve

# Equilibrium point (calculated above)
Q_eq = 500
P_eq = 3.5

# Plot the curves
plt.figure(figsize=(8, 6))
plt.plot(Q, P_d, label='Demand', color='blue', linewidth=2)
plt.plot(Q, P_s, label='Supply', color='red', linewidth=2)
plt.plot(Q_eq, P_eq, 'go', markersize=10, label='Equilibrium (500, 3.5)')

# Add labels and title
plt.xlabel('Quantity', fontsize=12)
plt.ylabel('Price', fontsize=12)
plt.title('Market Equilibrium', fontsize=14)
plt.legend()
plt.grid(True)
plt.show()
