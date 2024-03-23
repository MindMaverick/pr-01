#include <stdio.h>

int main()
{
    int score;
    char grade[4];
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

    // If grade is 'F', print donkey image
    if (grade[0] == 'F')
    {
        printf("Student failed. Here's a donkey so cheer you up:\n");
        printf("  \\    ,__\n");
        printf("   \\  (oo)____\n");
        printf("      (__)    )\\\n");
        printf("         ||--|| *\n");
    }

    return 0;
}
