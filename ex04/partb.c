#include <stdio.h>

#define DAYS 7

// Function prototypes
void intemps(float temps[], int numDays);
void findhiglowtemp(float temps[], int numDays, float *high, float *low);

int main()
{
    float temperatures[DAYS];
    float highest, lowest;

    // Input temperatures for each day
    intemps(temperatures, DAYS);

    // Find the highest and lowest temperatures
    findhiglowtemp(temperatures, DAYS, &highest, &lowest);
    float average = calcAvgTemp(temperatures, DAYS);

    // Display the results
    printf("The highest temperature during the week was: %.2f\n", highest);
    printf("The lowest temperature during the week was: %.2f\n", lowest);
    printf("The average temperature during the week was: %.2f\n", average);

    return 0;
}

// Function to input temperatures
void intemps(float temps[], int numDays)
{
    for (int i = 0; i < numDays; i++)
    {
        printf("Enter the temperature for day %d: ", i + 1);
        scanf("%f", &temps[i]);
    }
}

// Function to find the highest and lowest temperatures
void findhiglowtemp(float temps[], int numDays, float *high, float *low)
{
    *high = temps[0];
    *low = temps[0];
    for (int i = 1; i < numDays; i++)
    {
        if (temps[i] > *high)
        {
            *high = temps[i];
        }
        if (temps[i] < *low)
        {
            *low = temps[i];
        }
    }
}
float calcAvgTemp(float temps[], int numDays)
{
    float sum = 0.0;
    for (int i = 0; i < numDays; i++)
    {
        sum += temps[i];
    }
    return sum / numDays; // Return average
}