#include <stdio.h>

int main()
{
    int score;
    char grade;
    float gradePoint;

    // Ask the user to input the score
    printf("Enter the student's score: ");
    scanf("%d", &score);

    // Using if-else construct to determine the grade and grade point
    if (score >= 80 && score <= 100)
    {
        grade = 'A +';
        gradePoint = 4.0;
    }
    else if (score >= 75 && score < 80)
    {
        grade = 'A';
        gradePoint = 3.75;
    }
    else if (score >= 70 && score < 75)
    {
        grade = 'A -';
        gradePoint = 3.50;
    }
    else if (score >= 65 && score < 70)
    {
        grade = 'B +';
        gradePoint = 3.25;
    }
    else if (score >= 60 && score < 65)
    {
        grade = 'B';
        gradePoint = 3.00;
    }
    else if (score >= 55 && score < 60)
    {
        grade = 'B -';
        gradePoint = 2.75;
    }
    else if (score >= 50 && score < 55)
    {
        grade = 'C +';
        gradePoint = 2.50;
    }
    else if (score >= 45 && score < 50)
    {
        grade = 'C';
        gradePoint = 2.25;
    }
    else if (score >= 40 && score < 45)
    {
        grade = 'D';
        gradePoint = 2.00;
    }
    else
    {
        grade = 'F';
        gradePoint = 0.00;
    }

    printf("Grade: %c\n", grade);
    printf("Grade Point: %.2f\n", gradePoint);

    // Using switch-case to display the interpretation and remark
    switch (grade)
    {
    case 'A+':
    case 'A':
        if (gradePoint == 4.0)
        {
            printf("Interpretation: Outstanding\n");
            printf("Remark: GPA 3.00-4.00 = 1st class\n");
        }
        else if (gradePoint == 3.75)
        {
            printf("Interpretation: Excellent\n");
        }
        else
        {
            printf("Interpretation: Quite Excellent\n");
        }
        break;
    case 'B +':
    case 'B':
        if (gradePoint == 3.25)
        {
            printf("Interpretation: Very Good\n");
        }
        else if (gradePoint == 3.00)
        {
            printf("Interpretation: Good\n");
            printf("Remark: GPA 3.00-4.00 = 1st class\n");
        }
        else
        {
            printf("Interpretation: Quite Good\n");
        }
        break;
    case 'C':
        if (gradePoint == 2.50)
        {
            printf("Interpretation: Above Average\n");
        }
        else
        {
            printf("Interpretation: Average\n");
            printf("Remark: GPA 2.25-2.99 = 2nd class\n");
        }
        break;
    case 'D':
        printf("Interpretation: Poor\n");
        printf("Remark: GPA 1.65-2.24 = 3rd class\n");
        break;
    case 'F':
        printf("Interpretation: Fail\n");
        break;
    default:
        printf("Invalid score\n");
        break;
    }

    return 0;
}
