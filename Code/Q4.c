// Q.Write a program to simulate a traffic light controller. Ask the user to enter the current colour of the traffic light (Red, Yellow, or Green) and based on this input, display the appropriate action (Stop, Prepare to Stop, or Go). Use both if-else and switch-case constructs to implement this program.
#include <stdio.h>

int main()
{
    char color;
    const char *action;

    printf("Enter the current color of the traffic light (R for Red, Y for Yellow, G for Green): ");
    scanf(" %c", &color); // The space before %c is to discard any whitespace

    switch (color)
    {
    case 'R':
    case 'r':
        action = "Stop";
        break;
    case 'Y':
    case 'y':
        action = "Prepare to Stop";
        break;
    case 'G':
    case 'g':
        action = "Go";
        break;
    default:
        action = "Invalid color";
        break;
    }

    printf("%s\n", action); // Print the action once, based on the input

    return 0;
}
