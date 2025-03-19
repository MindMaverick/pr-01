# Name: MD Shakil
# ID: 2023200000821

import numpy as np
import matplotlib.pyplot as plt
from scipy.optimize import curve_fit

# Generate a decaying sine curve to n
def decaying_sine_curve(x, amplitude, frequency, decay, phase, n):
    """Calculates the value of a decaying sine curve raised to the power n."""
    return amplitude * np.exp(-decay * x) * np.sin(frequency * x + phase) ** n

def fit_function(x, amplitude, frequency, decay, phase, n):
    """Fitting function for curve fitting."""
    return decaying_sine_curve(x, amplitude, frequency, decay, phase, n)

def main():
    # Student ID and validate
    while True:
        student_id = input("Enter your 13-digit Student ID: ")
        if len(student_id) != 13 or not student_id.isdigit():
            print("Invalid Student ID. Please enter a 13-digit numeric ID.")
        else:
            break

    # n = three digits of the Student ID
    n = sum(int(digit) for digit in student_id[-3:])

    # Parameters for the decaying sine curve
    amplitude = 1.0
    frequency = 1.5
    decay = 0.1
    phase = 0.0

    # Generate random x values and corresponding y values
    x_data = np.linspace(0, 70, 700)
    y_data = decaying_sine_curve(x_data, amplitude, frequency, decay, phase, n) + 0.1 * np.random.normal(size=x_data.size)

    # Fit the curve to the generated data
    initial_guess = [1.0, 1.5, 0.05, 0.0]
    params, _ = curve_fit(lambda x, amplitude, frequency, decay, phase: fit_function(x, amplitude, frequency, decay, phase, n), x_data, y_data, p0=initial_guess)

    # Generate fitted curve using optimized parameters
    y_fit = fit_function(x_data, *params, n)

    # Plotting the data and fitted curve
    plt.figure(figsize=(10, 6))
    plt.scatter(x_data, y_data, color='purple', s=10, label='Random Data Points', alpha=0.5)
    plt.plot(x_data, y_fit, color='red', linewidth=2, label=f'Fitted sin^{n}(x) Curve')
    plt.title(f'Decaying Sine Curve of sin^{n}(x)')
    plt.xlabel('x')
    plt.ylabel('y')
    plt.legend()
    plt.grid(True)
    plt.show()
    
if __name__ == "__main__":
    main()
