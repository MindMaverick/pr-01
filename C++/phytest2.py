# Name: Md Shakil
# ID: 2023200000821
import numpy as np
import matplotlib.pyplot as plt
from scipy.optimize import curve_fit

# Define a decaying sine function with power n
def decaying_sine_curve(x, amplitude, frequency, decay, phase, n):
    return amplitude * np.exp(-decay * x) * np.sin(frequency * x + phase)**n

# Prompt user for Student ID and validate it
student_id = input("Enter your 13-digit Student ID: ")

if len(student_id) != 13 or not student_id.isdigit():
    print("Invalid Student ID. Please enter a 13-digit numeric ID.")
    exit()

# Calculate n from the last three digits of the Student ID
# n=last three digits eg 821 for me
try:
    n = sum(int(digit) for digit in student_id[-3:])
except ValueError:
    print("Invalid Student ID. Please enter a 13-digit numeric ID.")
    exit()

# Parameters for the decaying sine curve
amplitude = 2.0
frequency = 2.5
decay = 0.5
phase = 1.0

# Generate x values and noisy y values based on the decaying sine curve
x_data = np.linspace(0, 10, 500)
y_data = decaying_sine_curve(x_data, amplitude, frequency, decay, phase, n) + 0.2 * np.random.normal(size=x_data.size)

# Define the fitting function using the calculated n
def fit_function(x, amplitude, frequency, decay, phase):
    return decaying_sine_curve(x, amplitude, frequency, decay, phase, n)

# Fit the curve to the generated data with refined initial guesses
initial_guess = [amplitude, frequency, decay, phase]
params, _ = curve_fit(fit_function, x_data, y_data, p0=initial_guess)

# Generate the fitted y values
y_fit = fit_function(x_data, *params)

# Plotting the data and fitted curve
plt.figure(figsize=(12, 7))
plt.scatter(x_data, y_data, color='purple', s=10, label='Generated Data', alpha=0.5)
plt.plot(x_data, y_fit, color='red', linewidth=2, label=f'Fitted Decaying sin^{n}(x) Curve')
plt.title(f'Fit of Decaying sin^{n}(x) Curve with n = {n}')
plt.xlabel('x')
plt.ylabel('y')
plt.legend()
plt.grid(True, linestyle='--', alpha=0.7)
plt.show()
