// Q.2. Write a program in C that converts a number given in any other base (binary, octal, and hexadecimal) to decimal.
#include <stdio.h>

// Function to calculate the power of a number
int power(int base, int exponent)
{
    int result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}

// Function to convert binary to decimal
int binaryToDecimal(int number)
{
    int decimal = 0, i = 0, remainder;
    while (number != 0)
    {
        remainder = number % 10;
        number /= 10;
        decimal += remainder * power(2, i);
        ++i;
    }
    return decimal;
}

// Function to convert octal to decimal
int octalToDecimal(int number)
{
    int decimal = 0, i = 0, remainder;
    while (number != 0)
    {
        remainder = number % 10;
        number /= 10;
        decimal += remainder * power(8, i);
        ++i;
    }
    return decimal;
}

// Function to convert hexadecimal to decimal
int hexadecimalToDecimal(int number)
{
    int decimal = 0, i = 0, remainder;
    while (number != 0)
    {
        remainder = number % 10;
        number /= 10;
        decimal += remainder * power(16, i);
        ++i;
    }
    return decimal;
}

int main()
{
    int base, number;
    printf("This is the number converter from base 2,8,16 to 10(Decimal). (v1.0).\n\nEnter the base of the number you want to convert (2 for binary, 8 for octal, 16 for hexadecimal): ");
    scanf("%d", &base);
    printf("Enter the number: ");
    scanf("%d", &number);

    int decimalNumber;
    switch (base)
    {
    case 2:
        decimalNumber = binaryToDecimal(number);
        printf("%d in binary is %d in decimal\n", number, decimalNumber);
        break;
    case 8:
        decimalNumber = octalToDecimal(number);
        printf("%d in octal is %d in decimal\n", number, decimalNumber);
        break;
    case 16:
        decimalNumber = hexadecimalToDecimal(number);
        printf("%d in hexadecimal is %d in decimal\n", number, decimalNumber);
        break;
    default:
        printf("Invalid base\n");
        break;
    }

    return 0;
}
