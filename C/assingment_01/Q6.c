// Q.Develop a basic calculator program that performs addition, subtraction, multiplication, and division. Ask the user to enter two numbers and select an operation (+, -, *, /). Create a menu for the options. Perform the calculation and display the result.Use both if-else and switch-case constructs to handle the different operations.
#include <stdio.h>

float add(float num1, float num2)
{
    return num1 + num2;
}

float subtract(float num1, float num2)
{
    return num1 - num2;
}

float multiply(float num1, float num2)
{
    return num1 * num2;
}

float divide(float num1, float num2)
{
    if (num2 != 0)
        return num1 / num2;
    else
    {
        printf("Error: Cannot divide by zero!\n");
        return 0;
    }
}

int main()
{
    float num1, num2, result;
    char operation;

    printf("Welcome to the basic calculator!\n");
    printf("Enter '+' for addition\n");
    printf("Enter '-' for subtraction\n");
    printf("Enter '*' for multiplication\n");
    printf("Enter '/' for division\n");
    printf("Enter the operation: ");
    scanf(" %c", &operation);

    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    switch (operation)
    {
    case '+':
        result = add(num1, num2);
        break;
    case '-':
        result = subtract(num1, num2);
        break;
    case '*':
        result = multiply(num1, num2);
        break;
    case '/':
        result = divide(num1, num2);
        break;
    default:
        printf("Invalid operation entered.\n");
        return 1;
    }

    printf("%.2f %c %.2f = %.2f\n", num1, operation, num2, result);

    return 0;
}
