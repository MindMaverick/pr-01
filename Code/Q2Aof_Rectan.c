/*Write a C program to calculate the area of a rectangle given its length and width. The formula for the area of a rectangle is A = length * width, where A is the area, length is the length of the rectangle, and width is the width of the rectangle. Prompt the user to input the length and width, then display the calculated area.*/
#include <stdio.h>
int main()
{
    float length, width, area;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    printf("The area of the rectangle is: %.2f\n", area = length * width);
    return 0;
}