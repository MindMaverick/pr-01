#include <stdio.h>
void toppers(int marks[], int nums)
{
    int tpcount = (int)(nums * 0.10 + 0.5); // Calculate the number of top performers
    int tscores[tpcount];                   // Create an array to store the top scores

    // Initialize tscores with the smallest possible values
    for (int i = 0; i < tpcount; i++)
    {
        tscores[i] = -1; // Assuming scores are non-negative
    }

    // Iterate through all scores
    for (int i = 0; i < nums; i++)
    {
        for (int j = 0; j < tpcount; j++)
        {
            if (marks[i] > tscores[j])
            {
                // Shift lower scores down by one position
                for (int k = tpcount - 1; k > j; k--)
                {
                    tscores[k] = tscores[k - 1];
                }
                // Insert the new score
                tscores[j] = marks[i];
                break;
            }
        }
    }

    // Print the top performer scores
    printf("Top performer(s) (Top 10%%):\n");
    if (tpcount > 0)
    {
        for (int i = 0; i < tpcount; i++)
        {
            if (tscores[i] != -1)
            { // Check if a valid score is present
                printf("Student with marks: %d\n", tscores[i]);
            }
        }
    }
    else
    {
        printf("Not enough students to determine top performers.\n");
    }
}

int main()
{
    int nums;
    printf("Enter the number of students: ");
    scanf("%d", &nums);
    int marks[nums]; // Declare the marks array

    // Read the marks for each student
    for (int i = 0; i < nums; i++)
    {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    toppers(marks, nums); // Call the toppers function
    return 0;
}
