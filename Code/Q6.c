#include <stdio.h>

int main()
{
    double num1, num2;
    char operation;

    // Display menu
    printf("Welcome to the basic calculator!\n");
    printf("Enter '+' for addition\n");
    printf("Enter '-' for subtraction\n");
    printf("Enter '*' for multiplication\n");
    printf("Enter '/' for division\n");

    // Get user input
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    printf("Enter the operation: ");
    scanf(" %c", &operation); // Notice the space before %c to catch any previous newline character

    // calculation
    if (operation == '+' || operation == '-' || operation == '*' || operation == '/')
    {
        switch (operation)
        {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0)
            {
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            }
            else
            {
                printf("Error: Division by zero!\n");
            }
            break;
        default:

        {
            printf("Invalid operation!\n"); // This should not happen due to the if condition
        }
        }
    }
    else
    {
        printf("Invalid operation entered.\n");
    }

    return 0;
}
