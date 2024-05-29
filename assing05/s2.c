#include <stdio.h>

#define MAX_STUDENTS 100
#define MAX_SUBJECTS 12

void toppers(int marks[MAX_STUDENTS][MAX_SUBJECTS], int nstds, int nosubs, int T);

int main()
{
    int nstds, nosubs, T;
    int marks[MAX_STUDENTS][MAX_SUBJECTS];

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &nstds);

    // Input the number of subjects
    printf("Enter the number of subjects: ");
    scanf("%d", &nosubs);

    // Input the threshold value
    printf("Enter the threshold value: ");
    scanf("%d", &T);

    // Input the marks for each student
    for (int i = 0; i < nstds; i++)
    {
        printf("Enter marks for student %d:\n", i + 1);
        for (int j = 0; j < nosubs; j++)
        {
            printf("Subject %d (0-100): ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    // Find and print the toppers
    toppers(marks, nstds, nosubs, T);

    // Print the matrix of marks
    printf("\nThe matrix is:\n");
    for (int i = 0; i < nstds; i++)
    {
        for (int j = 0; j < nosubs; j++)
        {
            printf("%d\t", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void toppers(int marks[MAX_STUDENTS][MAX_SUBJECTS], int nstds, int nosubs, int T)
{
    printf("Students with an average mark above %d: ", T);
    for (int i = 0; i < nstds; i++)
    {
        int sum = 0;
        for (int j = 0; j < nosubs; j++)
        {
            sum += marks[i][j];
        }
        float average = (float)sum / nosubs;
        if (average > T)
        {
            printf("%d ", i); // Student ID is the row number
        }
    }
    printf("\n");
}
