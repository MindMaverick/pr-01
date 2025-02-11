#include <stdio.h>

int CalculateGradePoint(int mark)
{
    if (mark >= 90 && mark <= 100)
        return 4;
    else if (mark >= 80 && mark <= 89)
        return 3;
    else if (mark >= 70 && mark <= 79)
        return 2;
    else if (mark >= 60 && mark <= 69)
        return 1;
    else
        return 0; // Marks below 60 or greater than 100
}

int CalculateGradePoints(int marks1, int marks2, int marks3)
{
    int total_grade_points = 0; // initially
    total_grade_points += CalculateGradePoint(marks1);
    total_grade_points += CalculateGradePoint(marks2);
    total_grade_points += CalculateGradePoint(marks3);
    return total_grade_points;
}

int main()
{
    int marks1, marks2, marks3;
    int result;

    printf("Enter marks of subject 1: ");
    result = scanf("%d", &marks1);
    if (result != 1 || marks1 < 0 || marks1 > 100)
    {
        printf("Invalid input. Please enter a value between 0 and 100.\n");
        return 123;
    }

    printf("Enter marks of subject 2: ");
    result = scanf("%d", &marks2);
    if (result != 1 || marks2 < 0 || marks2 > 100)
    {
        printf("Invalid input. Please enter a value between 0 and 100.\n");
        return 123;
    }

    printf("Enter marks of subject 3: ");
    result = scanf("%d", &marks3);
    if (result != 1 || marks3 < 0 || marks3 > 100)
    {
        printf("Invalid input. Please enter a value between 0 and 100.\n");
        return 123;
    }

    int total_grade_points = CalculateGradePoints(marks1, marks2, marks3);

    if (total_grade_points >= 10)
        printf("Excellent Result\n");
    else if (total_grade_points >= 7)
        printf("Good Result\n");
    else
        printf("Average Result\n");

    return 0;
}
