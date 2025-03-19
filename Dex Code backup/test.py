import numpy as np
import matplotlib.pyplot as plt
from scipy.optimize import curve_fit

# Name: Md Shakil
# ID: 2023200000821

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
    amplitude = 2.0
    frequency = 2.5
    decay = 0.5
    phase = 1.0

    x_data = np.linspace(0, 20, 500)
    y_data = decaying_sine_curve(x_data, amplitude, frequency, decay, phase, n) + 0.2 * np.random.normal(size=x_data.size)

    initial_guess = [amplitude, frequency, decay, phase]

    try:
        params, _ = curve_fit(lambda x, amplitude, frequency, decay, phase: fit_function(x, amplitude, frequency, decay, phase, n), x_data, y_data, p0=initial_guess)
    except RuntimeError:
        print("Error in curve fitting. Please check your generated data.")
        return

    y_fit = fit_function(x_data, *params, n)


    plt.figure(figsize=(12, 7))
    plt.scatter(x_data, y_data, color='purple', s=10, label='Generated Data', alpha=0.5)
    plt.plot(x_data, y_fit, color='red', linewidth=2, label=f'Fitted Decaying sin^{n}(x) Curve', zorder=2)
    plt.title(f'Fit of Decaying sin^{n}(x) Curve with n = {n}', fontsize=16)
    plt.xlabel('x', fontsize=14)
    plt.ylabel('y', fontsize=14)
    plt.legend(fontsize=12)
    plt.grid(True, linestyle='--', alpha=0.7)
    plt.xlim(min(x_data) - 1, max(x_data) + 1)  #  x-axis limits
    plt.ylim(min(min(y_data), min(y_fit)) - 1, max(max(y_data), max(y_fit)) + 1)  # A y-axis limits
    plt.axhline(0, color='black', linewidth=0.8, linestyle='--', zorder=1)  # horizontal line at y=0
    plt.savefig('decaying_sine_curve_fit.png', dpi=300, bbox_inches='tight')  # Saves the plot as a PNG file
    plt.show()

if __name__ == "__main__":
    main()
