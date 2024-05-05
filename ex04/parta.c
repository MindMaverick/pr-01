#include <stdio.h>

void inmarks(int marks[], int n);
float calcAvg(int marks[], int n);
int finHigh(int marks[], int n);
int finLow(int marks[], int n);
int conAvAvg(int marks[], int n, float avg);
void calGD(int marks[], int n, int grade_counts[]);
void toppers(int marks[], int n);

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    int marks[n];
    int grade_counts[5] = {0}; // A, B, C, D, F

    inmarks(marks, n);
    float avg = calcAvg(marks, n);
    printf("Average marks: %.2f\n", avg);
    printf("Highest mark: %d\n", finHigh(marks, n));
    printf("Lowest mark: %d\n", finLow(marks, n));
    printf("Number of students with marks above average: %d\n", conAvAvg(marks, n, avg));
    calGD(marks, n, grade_counts);
    printf("Grade distribution:\nA: %d\nB: %d\nC: %d\nD: %d\nF: %d\n", grade_counts[0], grade_counts[1], grade_counts[2], grade_counts[3], grade_counts[4]);
    toppers(marks, n);

    return 0;
}

void inmarks(int marks[], int n)
{
    int count = 0; // Initialize count to 0
    for (int i = 0; i < n; i++)
    {
        printf("Enter marks for student %d: ", i + 1);
        if (scanf("%d", &marks[i]) != 1)
        {
            printf("Invalid input. Please enter an integer.\n");
            // Clear input buffer
            while (getchar() != '\n')
                ;
            i--;      // Decrement i to repeat current iteration
            continue; // Skip to next iteration
        }
        count++; // Increment count for successfully entered mark
    }
    printf("Number of marks entered: %d\n", count);
}

float calcAvg(int marks[], int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += marks[i];
    }
    return sum / n;
}

int finHigh(int marks[], int n)
{
    int highest = marks[0];
    for (int i = 1; i < n; i++)
    {
        if (marks[i] > highest)
            highest = marks[i];
    }
    return highest;
}

int finLow(int marks[], int n)
{
    int lowest = marks[0];
    for (int i = 1; i < n; i++)
    {
        if (marks[i] < lowest)
            lowest = marks[i];
    }
    return lowest;
}

int conAvAvg(int marks[], int n, float avg)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (marks[i] > avg)
            count++;
    }
    return count;
}

void calGD(int marks[], int n, int grade_counts[])
{
    for (int i = 0; i < n; i++)
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

void toppers(int marks[], int n)
{
    int top_performers_count = n / 10;
    printf("Top performers (Top 10%%):\n");
    if (top_performers_count > 0)
    {
        for (int i = n - top_performers_count; i < n; i++)
        {
            printf("Student with marks: %d\n", marks[i]);
        }
    }
    else
    {
        printf("There are fewer than 10 students.\n");
    }
}
