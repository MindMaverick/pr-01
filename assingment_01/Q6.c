// Q.Develop a basic calculator program that performs addition, subtraction, multiplication, and division. Ask the user to enter two numbers and select an operation (+, -, *, /). Create a menu for the options. Perform the calculation and display the result.Use both if-else and switch-case constructs to handle the different operations.
#include <stdio.h>
int main()
{
    double Shakil, num2, result;
    char operation;

    // Display menu
    printf("Welcome to the basic calculator!\n-Enter '+' for addition\n-Enter '-' for subtraction\n-Enter '*' for multiplication\n-Enter '/' for division\n");
    printf("Enter the operation: ");
    scanf(" %c", &operation); // space before %c to catch any previous newline character

    // calculation
    if (operation == '+' || operation == '-' || operation == '*' || operation == '/')
    {
        // Get user input
        printf("Enter the first number: ");
        scanf("%lf", &Shakil);
        printf("Enter the second number: ");
        scanf("%lf", &num2);

        // Ensure Shakil is the larger of the two numbers
        if (num2 > Shakil)
        {
            double temp = Shakil;
            Shakil = num2;
            num2 = temp;
        }

        switch (operation)
        {
        case '+':
            result = Shakil + num2;
            break;
        case '-':
            result = Shakil - num2;
            break;
        case '*':
            result = Shakil * num2;
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0)
            {
                result = Shakil / num2;
            }
            else
            {
                printf("Oopsie-doodle: Tried dividing by zilch! 🙈🔥\n");
                return 0;
            }
            break;
        default:
            printf("Invalid Input !!!!!\n \t Are you stupid ? Enter either of (+,-,*,/)");
            return 0; // This should not happen due to the if condition
        }

        // Display result
        printf("%.2lf %c %.2lf = %.2lf\n", Shakil, operation, num2, result);
    }
    else
    {
        printf("Invalid operation entered. Enter either of (+ , - , * or /)\n");
    }

    return 0;
}
