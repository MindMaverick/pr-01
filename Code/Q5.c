// Q.Create a program that calculates the grade of a student based on their score. Ask the user to input the score, then determine and display the corresponding grade (A, B, C, D, or F) based on your university grading system.Implement this program using both if-else and switch-case statements.
#include <stdio.h>

int main()
{
    int score;
    char grade[3];
    float gradePoint;

    // Ask the user to input the score
    printf("Enter the student's score: ");
    scanf("%d", &score);

    // Using if-else construct to determine the grade and grade point
    if (score >= 80 && score <= 100)
    {
        strcpy(grade, "A+");
        gradePoint = 4.0;
    }
    else if (score >= 75 && score < 80)
    {
        strcpy(grade, "A");
        gradePoint = 3.75;
    }
    else if (score >= 70 && score < 75)
    {
        strcpy(grade, "A-");
        gradePoint = 3.50;
    }
    else if (score >= 65 && score < 70)
    {
        strcpy(grade, "B+");
        gradePoint = 3.25;
    }
    else if (score >= 60 && score < 65)
    {
        strcpy(grade, "B");
        gradePoint = 3.00;
    }
    else if (score >= 55 && score < 60)
    {
        strcpy(grade, "B-");
        gradePoint = 2.75;
    }
    else if (score >= 50 && score < 55)
    {
        strcpy(grade, "C+");
        gradePoint = 2.50;
    }
    else if (score >= 45 && score < 50)
    {
        strcpy(grade, "C");
        gradePoint = 2.25;
    }
    else if (score >= 40 && score < 45)
    {
        strcpy(grade, "D");
        gradePoint = 2.00;
    }
    else
    {
        strcpy(grade, "F");
        gradePoint = 0.00;
    }

    printf("Grade: %s\n", grade);
    printf("Grade Point: %.2f\n", gradePoint);

    // Using switch-case to display the interpretation and remark
    switch (grade[0])
    {
    case 'A':
        printf("Interpretation: Excellent\n");
        printf("Remark: GPA 3.75-4.00 = 1st class\n");
        break;
    case 'B':
        printf("Interpretation: Good\n");
        printf("Remark: GPA 3.00-3.74 = 2nd class\n");
        break;
    case 'C':
        printf("Interpretation: Average\n");
        printf("Remark: GPA 2.25-2.99 = 3rd class\n");
        break;
    case 'D':
        printf("Interpretation: Below Average\n");
        printf("Remark: GPA 2.00-2.24 = 4th class\n");
        break;
    case 'F':
        printf("Interpretation: Fail\n");
        printf("Remark: GPA 0.00-1.99 = Fail\n");
        break;
    default:
        printf("Invalid score\n");
        break;
    }

    return 0;
}
