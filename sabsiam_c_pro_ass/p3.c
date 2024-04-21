#include <stdio.h>
#include <string.h>

int main()
{
    unsigned long long binary = 0; // Use unsigned long long for 8-bit binary storage
    long octal, hexadecimal = 0;
    int digit, place = 1;
    char hexString[8];

    printf("Enter an octal number: ");
    scanf("%lo", &octal);

    // Convert octal to binary
    while (octal != 0)
    {
        digit = octal % 10;
        binary += digit * place;
        place *= 8;
        octal /= 10;
    }

    printf("Binary: ");
    for (int i = 0; i < 8; i++)
    {
        printf("%d", (binary >> (7 - i)) & 1);
    }
    printf("\n");

    // Convert binary to hexadecimal
    place = 1;
    int hexIndex = 0;
    while (binary != 0)
    {
        digit = binary % 16;
        hexadecimal += digit * place;
        place *= 16;

        if (digit < 10)
        {
            hexString[hexIndex] = digit + '0';
        }
        else
        {
            hexString[hexIndex] = digit - 10 + 'A';
        }
        hexIndex++;
        binary /= 16;
    }

    int numLeadingZeros = 8 - hexIndex;
    for (int i = 0; i < numLeadingZeros; i++)
    {
        hexString[i] = '0';
    }

    int len = strlen(hexString);
    for (int i = 0; i < len / 2; i++)
    {
        char temp = hexString[i];
        hexString[i] = hexString[len - 1 - i];
        hexString[len - 1 - i] = temp;
    }

    printf("Hexadecimal: %s\n", hexString);

    return 0;
}
