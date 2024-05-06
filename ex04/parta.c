#include <stdio.h>

void inmarks(int marks[], int n);
float calcAvg(int marks[], int n);
int findhigh(int marks[], int n);
int findlow(int marks[], int n);
int conAvAvg(int marks[], int n, float avg);
void calGD(int marks[], int n, int grade_counts[]);
void toppers(int marks[], int n);

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    int marks[n];
    int grade_counts[5] = {0};

    inmarks(marks, n);
    float avg = calcAvg(marks, n);
    printf("Average marks: %.2f\n", avg);
    printf("Highest mark: %d\n", findhigh(marks, n));
    printf("Lowest mark: %d\n", findlow(marks, n));
    printf("Number of students with marks above average: %d\n", conAvAvg(marks, n, avg));
    calGD(marks, n, grade_counts);
    toppers(marks, n);

    return 0;
}

void inmarks(int marks[], int n)
{
    int i = 0, input;
    while (i < n)
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

float calcAvg(int marks[], int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += marks[i];
    }
    return sum / n;
}

int findhigh(int marks[], int n)
{
    int highest = marks[0];
    for (int i = 1; i < n; i++)
    {
        if (marks[i] > highest)
            highest = marks[i];
    }
    return highest;
}

int findlow(int marks[], int n)
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

int compare(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}

void magic(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void toppers(int marks[], int n)
{
    magic(marks, n);                                  // Sorts the array in descending order
    int top_performers_count = (int)(n * 0.10 + 0.5); // Calculates the top 10%
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
