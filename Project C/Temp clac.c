/*
 * File: temperature_converter.c
 * Author: Md Shakil
 * Student ID: 2023200000821
 * Date: 09 March 2024
 * Description: This program demonstrates the use of choice, if, else if statements, and functions to calculate temperature in either Fahrenheit or Celsius units. It's a demonstration of conversion between the two units, serving as a temperature converter.
 */


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
