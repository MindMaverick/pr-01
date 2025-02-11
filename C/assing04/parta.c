#include <stdio.h>
#include <math.h>

void inmarks(int marks[], int nums);
float calcAvg(int marks[], int nums);
int findhigh(int marks[], int nums);
int findlow(int marks[], int nums);
int conAvAvg(int marks[], int nums, float avg);
void calgrd(int marks[], int nums, int grade_counts[]);
void printGrades(int grade_counts[]);
void toppers(int marks[], int nums);
void magic(int bull[], int nums);

char grades[] = {'A', 'B', 'C', 'D', 'F'};

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

    int ume = findhigh(marks, nums);
    int lou = findlow(marks, nums);

    printf("Highest mark: %d\n", ume);
    printf("Lowest mark: %d\n", lou);

    int caa = conAvAvg(marks, nums, avg);

    printf("Number of students with marks above average: %d\n", caa);
    calgrd(marks, nums, grade_counts);
    printGrades(grade_counts);

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

void calgrd(int marks[], int nums, int grade_counts[])
{
    for (int i = 0; i < nums; i++)
    {
        if (marks[i] >= 90)
            grade_counts[0]++; // 'A'
        else if (marks[i] >= 80)
            grade_counts[1]++; // 'B'
        else if (marks[i] >= 70)
            grade_counts[2]++; // 'C'
        else if (marks[i] >= 60)
            grade_counts[3]++; // 'D'
        else
            grade_counts[4]++; // 'F'
    }
}

void printGrades(int grade_counts[])
{

    for (int i = 0; i < 5; i++)
    {
        printf("Number of students with grade %c: %d\n", grades[i], grade_counts[i]);
    }
}

void magic(int bull[], int nums) // custome function for shorting,,
{
    for (int i = 0; i < nums - 1; i++)
    {
        int max_idx = i;
        for (int j = i + 1; j < nums; j++)
        {
            if (bull[j] > bull[max_idx])
                max_idx = j;
        }
        int temp = bull[max_idx];
        bull[max_idx] = bull[i];
        bull[i] = temp;
    }
}

void toppers(int marks[], int nums)
{
    magic(marks, nums);
    int top_performers_count = ceil(nums * 0.10);
    //comented out as math.h s celi library is good enough for the whole number thing
    //int top_performers_count = (int)(nums * 0.10 + 0.4); // to get a whole number

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
