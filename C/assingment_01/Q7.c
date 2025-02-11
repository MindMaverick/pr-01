// Q.Write a program that takes an integer input representing a day of the week and prints the corresponding name of the day. If the user presses 1, it will print Sunday, if press 2, print Monday etc. Implement this program using both if-else and switch-case constructs.
#include <stdio.h>

const char *getDayOfWeek(int day)
{
    const char *dayofWeek;

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

    return dayofWeek;
}

int main(void)
{
    int day;
    const char *dayofWeek;

    printf("Enter the day number: ");
    scanf("%d", &day);

    dayofWeek = getDayOfWeek(day);

    if (strcmp(dayofWeek, "Invalid") != 0)
    {
        printf("The Day of the Week is %s\n", dayofWeek);
    }
    else
    {
        printf("Invalid day number. Please enter a number between 1 and 7.\n");
    }

    return 0;
}
