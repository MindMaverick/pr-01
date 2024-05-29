#include <stdio.h>
void toppers(int marks[], int n)
{
    int toppercount = (int)(n * 0.10 + 0.5); // Calculates the top 10%
    printf("Top performer(s) (Top 10%%): ");
    if (toppercount > 0)
    {
        for (int i = 0; i < toppercount; i++)
        {
            printf("Student with marks: %d\n", marks[i]);
        }
    }
    else
    {
        printf("Not enough students to determine top performers.\n");
    }
}

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    int marks[n]; // Declare the marks array

    // Read the marks for each student
    for (int i = 0; i < n; i++)
    {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    toppers(marks, n); // Call the toppers function
    return 0;
}
