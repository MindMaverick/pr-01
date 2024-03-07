// Lest begin with lab and class lesson no , 1.00.and 2.20
/*My name is Md Shakil ,, Department of CSE,, SEU,
id:2023200000821, writing date, 1 Mar 2024*/
#include <stdio.h>
const float pi = 3.14; // a constant and floating value

int main()
{
    printf("Hello there as you all know tha,,,\n");
    int a, b, c, d, f, g, h;
    a = 2;
    b = 5;
    c = a + b;
    d = 1;
    f = c + d;
    h = f + c;
    g = a + b + c + d + f + h;

    float x, y, z, area;
    x = 5.51454;
    y = 3.25984;
    z = x + y;

    area = (c + z) * pi;
    // for int term
    printf("sum of %d and %d is %d \n", a, b, c);
    // for float term
    printf("sum of %.3f and %.3f is %.4f \n", x, y, z);

    // calculating the area of the circle
    printf("the area of the circle is %f\n", area); // Use %f for a floating variable

    printf("sum of all g,int is %d \n", g);

    float j, k, l;

    // Prompting the user to enter the value of j
    printf("Enter the value of j: ");

    scanf("%f", &j); // Use %f for float input-

    // Prompting the user to enter the value of k
    printf("Enter the value of k: ");

    scanf("%f", &k); // Use of %f for float input

    // The sum of j and k;
    l = j + k;

    // Print the sum of j and k
    printf("The sum of %.3f and %.3f is %.3f \n", j, k, l);
    // input oriented area of a circle
    float am, barea;

    // valu of the radius
    printf(" What is the radious, am = ? ", am);
    scanf("%f", &am);

    // The custom area of the given circle
    barea = am * am * pi;
    printf("the area is, %.4f \n", barea);
    // lets add an emoji just for fun

    printf("\U0001F600\n");
    //  U0001F600) is the Unicode value to the emoji

    return 0;
}
