// UP Date march20,2024, @ cse 161
#include <stdio.h>
#include <math.h> // Include the math library for the sqrt function

int main(void)
{
    int choice, val;
    double a, b, c, Discriminant, root1, root2, sum, product;

    for (;;) // Infinite loop to keep asking for coefficients
    {
        printf("Enter the coefficients of the quadratic function 'ax^2+bx+c=0'\n");
        printf("a=? \n");
        scanf("%lf", &a);
        printf("b=? \n");
        scanf("%lf", &b);
        printf("c=? \n");
        scanf("%lf", &c);

        Discriminant = b * b - 4 * a * c;

        if (Discriminant >= 0)
        {
            if (Discriminant > 0)
            {
                root1 = (-b + sqrt(Discriminant)) / (2 * a);
                root2 = (-b - sqrt(Discriminant)) / (2 * a);
                printf("The roots are %.3lf and %.3lf\n", root1, root2);
            }
            else
            {
                root1 = root2 = -b / (2 * a); // Both roots are the same
                printf("The roots are %.3lf, %.3lf\n", root1, root1);
            }

            do
            {
                printf("Choose an operation:\n");
                printf("1. Sum of roots\n");
                printf("2. Product of roots\n");
                printf("Enter your choice (1 or 2): ");
                scanf("%d", &choice);
                switch (choice)
                {
                case 1:
                    sum = root1 + root2;
                    printf("The sum of the roots is %.3lf\n", sum);
                    val = 1; // Update val to exit the loop
                    break;
                case 2:
                    product = root1 * root2;
                    printf("The product of the roots is %.3lf\n", product);
                    val = 1; // Update val to exit the loop
                    break;
                default:
                    printf("Invalid choice. Please try again.\n");
                    val = 0; // Ensure the loop continues for invalid choice
                    break;
                }
            } while (val == 0); // Use == for comparison
        }
        else
        {
            printf("No real roots\n");
        }

        // Ask the user if they want to continue or exit
        printf("Do you want to calculate another quadratic equation? (1 for yes, 0 for no): ");
        scanf("%d", &val);
        if (val == 0)
        {
            break; // Exit the infinite loop if the user chooses not to continue
        }
    }
    return 0;
}
