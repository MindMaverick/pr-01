/*Write a C program to calculate the area of a circle given its radius. The formula for the area of a circle is A = π * r^2, where A is the area and r as the radius. Take radius (r) as input from the user and then display the calculated area.*/
// Ans::

#include <stdio.h>
const float PI = 3.14159;
int main()
{
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("The area of the circle with radius %.2f is: %.2f\n", radius, area);

    return 0;
}
