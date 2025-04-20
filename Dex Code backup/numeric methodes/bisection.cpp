#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits> // Required for numeric_limits

using namespace std; // Use the standard namespace

// Function to define the equation
double f(double x)
{
    return x * x - 2;
}

// Function to get double input with validation
double getDoubleInput(const string &prompt)
{
    double value;
    while (!(cin >> value))
    {
        cout << "Invalid input. Please enter a numeric value for " << prompt << ": ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Consume the newline
    return value;
}

// Function to get integer input with validation
int getIntegerInput(const string &prompt)
{
    int value;
    while (!(cin >> value) || value <= 0)
    {
        cout << "Invalid input. Please enter a positive integer for " << prompt << ": ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return value;
}

// Function to implement the Bisection Method
void bisectionMethod(double xl, double xu, double ea, int maxIterations)
{
    double xmold, xm;
    int iterationCount = 0;

    cout << fixed << setprecision(6);

    do
    {
        iterationCount++;
        xmold = xl;
        xm = (xl + xu) / 2.0;

        if (f(xl) * f(xm) < 0)
        {
            xu = xm;
        }
        else if (f(xl) * f(xm) > 0)
        {
            xl = xm;
        }
        else
        {
            cout << "Found exact root at x = " << xm << endl;
            return;
        }

        ea = abs((xm - xmold) / xm) * 100.0;

        cout << "Iteration " << iterationCount << ":  xl = " << xl
             << ",  xu = " << xu << ",  xm = " << xm << ",  f(xm) = " << f(xm)
             << ",  Error = " << ea << "%\n";

    } while (ea > ea && iterationCount < maxIterations);

    if (iterationCount >= maxIterations)
    {
        cout << "\nMaximum number of iterations reached.  The method did not converge to the desired tolerance.\n";
    }
    else
    {
        cout << "\nRoot found at x = " << xm << "  (f(x) = " << f(xm) << ")\n";
        cout << "Approximate relative error: " << ea << "%\n";
        cout << "Number of iterations: " << iterationCount << endl;
    }
}

int main()
{
    double xl, xu, ea;
    int maxIterations;

    // Get input using the input functions
    xl = getDoubleInput("lower bound (xl)");
    xu = getDoubleInput("upper bound (xu)");

    if (f(xl) * f(xu) > 0)
    {
        cout << "f(xl) and f(xu) have the same sign.  The Bisection Method may not find a root in this interval, or there may be an even number of roots.\n";
        cout << "Please choose a different interval.\n";
        return 1;
    }
    ea = getDoubleInput("desired absolute error tolerance (ea)");
    maxIterations = getIntegerInput("maximum number of iterations");

    // Call the bisection method function
    bisectionMethod(xl, xu, ea, maxIterations);

    return 0;
}
