#include <stdio.h>

int main()
{
    int score;
    char grade;
    float gradePoint;
    char *remark;

    printf("Enter the student's score: ");
    scanf("%d", &score);

    if (score >= 80)
    {
        grade = 'A';
        gradePoint = 4.0;
        remark = "Outstanding";
    }
    else if (score >= 75)
    {
        grade = 'A';
        gradePoint = 3.75;
        remark = "Excellent";
    }
    else if (score >= 70)
    {
        grade = 'A';
        gradePoint = 3.50;
        remark = "Quite Excellent";
    }
    else if (score >= 65)
    {
        grade = 'B';
        gradePoint = 3.25;
        remark = "Very Good";
    }
    else if (score >= 60)
    {
        grade = 'B';
        gradePoint = 3.00;
        remark = "Good";
    }
    else if (score >= 55)
    {
        grade = 'B';
        gradePoint = 2.75;
        remark = "Quite Good";
    }
    else if (score >= 50)
    {
        grade = 'C';
        gradePoint = 2.50;
        remark = "Above Average";
    }
    else if (score >= 45)
    {
        grade = 'C';
        gradePoint = 2.25;
        remark = "Average";
    }
    else if (score >= 40)
    {
        grade = 'D';
        gradePoint = 2.00;
        remark = "Poor";
    }
    else
    {
        grade = 'F';
        gradePoint = 0.00;
        remark = "Fail";
    }

    printf("Grade: %c\n", grade);
    printf("Grade Point: %.2f\n", gradePoint);
    printf("Remark: %s\n", remark);

    return 0;
}
