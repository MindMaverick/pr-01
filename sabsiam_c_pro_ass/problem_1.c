#include <stdio.h>

// Function to convert decimal to binary
void decimalToBinary(int n)
{
    int binaryNum[32]; // Array to store binary number
    int i = 0;         // Counter for binary array
    // decimal to binary
    while (n > 0)
    {
        binaryNum[i] = n % 2; // Store remainder in binary array
        n = n / 2;            // Divide the number by 2
        i++;                  // Increment counter
    }
    // Print binary equivalent
    printf("Binary equivalent: ");
    if (i == 0) // If the input is 0
        printf("0");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binaryNum[j]); // Print binary array in reverse order
    }
    printf("\n");
}
// Function to convert decimal to octal
void decimalToOctal(int n)
{
    int octalNum[32]; // Array to store octal number
    int i = 0;        // Counter for octal array
    // Convert decimal to octal
    while (n != 0)
    {
        octalNum[i] = n % 8; // Store remainder in octal array
        n = n / 8;           // Divide the number by 8
        i++;                 // Increment counter
    }
    // Print octal equivalent
    printf("Octal equivalent: ");
    if (i == 0) // If the input is 0
        printf("0");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", octalNum[j]); // Print octal array in reverse order
    }
    printf("\n");
}
//  decimal to hexadecimal
void decimalToHexadecimal(int n)
{
    char hexaNum[32]; // Array to store hexadecimal number
    int i = 0;        // Counter for hexadecimal array
    // Convert decimal to hexadecimal
    while (n != 0)
    {
        int temp = n % 16; // Get the remainder from the decimal number

        // Convert remainder to hexadecimal character
        if (temp < 10)
            hexaNum[i] = temp + '0'; // If remainder is less than 10, add '0'
        else
            hexaNum[i] = temp - 10 + 'A'; // If remainder is 10 or greater, add 'A' to 'F'
        n = n / 16;                       // Divide the number by 16
        i++;                              // Increment counter
    }
    // Print hexadecimal equivalent
    printf("Hexadecimal equivalent: ");
    if (i == 0) // If the input is 0
        printf("0");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", hexaNum[j]); // Print hexadecimal array in reverse order
    }
    printf("\n");
}
int main()
{
    int decnum_s;
    // Input decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decnum_s);
    // Convert decimal number to binary, octal, and hexadecimal
    decimalToBinary(decnum_s);
    printf("\n");
    decimalToOctal(decnum_s);
    printf("\n");
    decimalToHexadecimal(decnum_s);
    printf("\n");

    char link[100] = "https://github.com/MindMaverick";

    // Print the link
    printf("For more Info Click the link to visit my GitHub,\n \n \n %s\n", link);
    printf("\n \n");

    return 0;
}
