#include <stdio.h>

#define m_stds 100
#define msubs 20

void average_grades(int matrix[m_stds][msubs], int stds, int subs, float avg[m_stds]);

int main()
{
    int stds, subs;
    int matrix[m_stds][msubs];
    float avg[m_stds];

    printf("Enter the number of students (up to %d): ", m_stds);
    scanf("%d", &stds);
    printf("Enter the number of subjects (up to %d): ", msubs);
    scanf("%d", &subs);

    for (int i = 0; i < stds; i++)
    {
        for (int j = 0; j < subs; j++)
        {
            printf("Enter grade for student %d, subject %d: ", i + 1, j + 1);
            // +1 so that user sees s1 sub1 instead of 0,0

            scanf("%d", &matrix[i][j]);
        }
    }

    average_grades(matrix, stds, subs, avg);

    printf("Average grades of each student:\n");
    for (int i = 0; i < stds; i++)
    {
        printf("Student %d: %.2f\n", i + 1, avg[i]);
    }

    return 0;
}
void average_grades(int matrix[m_stds][msubs], int stds, int subs, float avg[m_stds])
{
    for (int i = 0; i < stds; i++)
    {
        int sum = 0;
        for (int j = 0; j < subs; j++)
        {
            sum += matrix[i][j];
        }
        avg[i] = (float)sum / subs;
    }
}
