#include <stdio.h>
#include <stdlib.h> //for q sort function;;

void inmarks(int marks[], int nums);

float calcAvg(int marks[], int nums);

int findhigh(int marks[], int nums);

int findlow(int marks[], int nums);

int conAvAvg(int marks[], int nums, float avg);

void calGD(int marks[], int nums, int grade_counts[]);

void toppers(int marks[], int nums);

int main()
{
    int nums;
    printf("Enter the number of students: ");
    scanf("%d", &nums);
    int marks[nums];
    int grade_counts[5] = {0};

    inmarks(marks, nums);
    float avg = calcAvg(marks, nums);
    printf("Average marks: %.2f\n", avg);
    printf("Highest mark: %d\n", findhigh(marks, nums));
    printf("Lowest mark: %d\n", findlow(marks, nums));
    printf("Number of students with marks above average: %d\n", conAvAvg(marks, nums, avg));
    calGD(marks, nums, grade_counts);
    toppers(marks, nums);

    return 0;
}

void inmarks(int marks[], int nums)
{
    int i = 0, input;
    while (i < nums)
    {
        printf("Enter marks for student %d (0-100): ", i + 1);
        if (scanf("%d", &input) == 1 && input >= 0 && input <= 100)
        {
            marks[i] = input;
            i++; // Increment only if input is valid and within range
        }
        else
        {
            printf("Invalid input. Please enter an integer between 0 and 100.\n");
            while (getchar() != '\n')
                ; // Clear input buffer
        }
    }
}

float calcAvg(int marks[], int nums)
{
    float sum = 0;
    for (int i = 0; i < nums; i++)
    {
        sum += marks[i];
    }
    return sum / nums;
}

int findhigh(int marks[], int nums)
{
    int highest = marks[0];
    for (int i = 1; i < nums; i++)
    {
        if (marks[i] > highest)
            highest = marks[i];
    }
    return highest;
}

int findlow(int marks[], int nums)
{
    int lowest = marks[0];
    for (int i = 1; i < nums; i++)
    {
        if (marks[i] < lowest)
            lowest = marks[i];
    }
    return lowest;
}

int conAvAvg(int marks[], int nums, float avg)
{
    int count = 0;
    for (int i = 0; i < nums; i++)
    {
        if (marks[i] > avg)
            count++;
    }
    return count;
}

void calGD(int marks[], int nums, int grade_counts[])
{
    for (int i = 0; i < nums; i++)
    {
        if (marks[i] >= 90)
            grade_counts[0]++;
        else if (marks[i] >= 80)
            grade_counts[1]++;
        else if (marks[i] >= 70)
            grade_counts[2]++;
        else if (marks[i] >= 60)
            grade_counts[3]++;
        else
            grade_counts[4]++;
    }
}

int compare(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}

void toppers(int marks[], int nums)
{
    // Use qsort instead of the custom magic function
    qsort(marks, nums, sizeof(int), compare);

    int top_performers_count = (int)(nums * 0.10 + 0.4); // to get a whole number

    printf("Top performer(s) (Top 10%%): ");

    if (top_performers_count > 0)
    {
        for (int i = 0; i < top_performers_count; i++)
        {
            printf("Student with marks: %d\n", marks[i]);
        }
    }
    else
    {
        printf("Not enough students to determine top performers.\n");
    }
}
