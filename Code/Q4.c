#include <stdio.h>
int main()
{
    char color;

    printf("Enter the current color of the traffic light (R for Red, Y for Yellow, G for Green): ");
    scanf(" %c", &color);
    if (color == 'R' || color == 'r')
    {
        printf("Stop\n");
    }
    else if (color == 'Y' || color == 'y')
    {
        printf("Prepare to Stop\n");
    }
    else if (color == 'G' || color == 'g')
    {
        printf("Go\n");
    }
    else
    {
        printf("Invalid color\n");
    }
    // Implimentation of switch
    switch (color)
    {
    case 'R':
    case 'r':
        printf("Stop - from switch-function\n");
        break;
    case 'Y':
    case 'y':
        printf("Prepare to Stop - from switch-function\n");
        break;
    case 'G':
    case 'g':
        printf("Go - from switch-function\n");
        break;
    default:
        printf("Invalid color - from switch-function\n");
        break;
    }

    return 0;
}
