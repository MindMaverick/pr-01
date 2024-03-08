/*#include <stdio.h>

int main()
{
    int choice;
    float temperature, convertedTemperature;

    // Prompt the user to choose the conversion type
    printf("Choose the conversion type:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    scanf("%d", &choice);

    // Check the user's choice and perform the corresponding conversion
    switch (choice)
    {
    case 1:
        // Celsius to Fahrenheit conversion
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        convertedTemperature = (temperature * 9 / 5) + 32;
        printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", temperature, convertedTemperature);
        break;
    case 2:
        // Fahrenheit to Celsius conversion
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        convertedTemperature = (temperature - 32) * 5 / 9;
        printf("%.2f Fahrenheit is equal to %.2f Celsius.\n", temperature, convertedTemperature);
        break;
    default:
        printf("Invalid choice. Please enter either 1 or 2.\n");
    }

    return 0;
}
// simplified
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}*/
// simplified without changing the functionality
#include <stdio.h>

int main() {
    int choice;
    float temperature, convertedTemperature;

    printf("Choose the conversion type:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        convertedTemperature = (temperature * 9 / 5) + 32;
        printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", temperature, convertedTemperature);
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        convertedTemperature = (temperature - 32) * 5 / 9;
        printf("%.2f Fahrenheit is equal to %.2f Celsius.\n", temperature, convertedTemperature);
    } else {
        printf("Invalid choice. Please enter either 1 or 2.\n");
    }

    return 0;
}
