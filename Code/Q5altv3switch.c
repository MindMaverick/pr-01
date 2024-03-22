#include <stdio.h>

int main()
{
    int score, category;
    char *grade;
    float gradePoint;
    char *remark;

    printf("Enter the student's score: ");
    scanf("%d", &score);

    // category based on score formula= condition ? value_if_true : value_if_false
    category = (score >= 80) ? 1 : (score >= 75) ? 2
                               : (score >= 70)   ? 3
                               : (score >= 65)   ? 4
                               : (score >= 60)   ? 5
                               : (score >= 55)   ? 6
                               : (score >= 50)   ? 7
                               : (score >= 45)   ? 8
                               : (score >= 40)   ? 9
                                                 : 10;

    // Using switch-case to set grade, gradePoint, and remark55
    switch (category)
    {
    case 1:
        grade = "A+";
        gradePoint = 4.0;
        remark = "Outstanding";
        break;
    case 2:
        grade = "A";
        gradePoint = 3.75;
        remark = "Excellent";
        break;
    case 3:
        grade = "A-";
        gradePoint = 3.50;
        remark = "Quite Excellent";
        break;
    case 4:
        grade = "B+";
        gradePoint = 3.25;
        remark = "Very Good";
        break;
    case 5:
        grade = "B";
        gradePoint = 3.00;
        remark = "Good";
        break;
    case 6:
        grade = "B-";
        gradePoint = 2.75;
        remark = "Quite Good";
        break;
    case 7:
        grade = "C+";
        gradePoint = 2.50;
        remark = "Above Average";
        break;
    case 8:
        grade = "C";
        gradePoint = 2.25;
        remark = "Average";
        break;
    case 9:
        grade = "D";
        gradePoint = 2.00;
        remark = "Poor";
        break;
    case 10:
        grade = "F";
        gradePoint = 0.00;
        remark = "Fail";
        break;
    default:
        grade = "Invalid";
        gradePoint = 0.00;
        remark = "Invalid score";
        break;
    }

    printf("Grade: %s\n", grade);
    printf("Grade Point: %.2f\n", gradePoint);
    printf("Remark: %s\n", remark);

    return 0;
}
