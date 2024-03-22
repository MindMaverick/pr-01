#include <stdio.h>

int main(void)
{
    int day;
    const char *dayofWeek; // Use const as we are assigning string literals

    printf("Enter the day number : ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:

        dayofWeek = "Sunday";
        break;
    case 2:

        dayofWeek = "Monday";
        break;
    case 3:

        dayofWeek = "Tuesday";
        break;
    case 4:

        dayofWeek = "Wednesday";
        break;
    case 5:

        dayofWeek = "Thursday";
        break;
    case 6:

        dayofWeek = "Friday";
        break;
    case 7:

        dayofWeek = "Saturday";
        break;
    default:

        dayofWeek = "Invalid";
        break;
    }

    // Check if the day number is valid before printing
    if (day >= 1 && day <= 7)
    {
        printf("The Day of the Week is %s\n", dayofWeek);
    }
    else
    {
        printf("Invalid day number. Please enter a number between 1 and 7.\n");
    }

    return 0;
}
