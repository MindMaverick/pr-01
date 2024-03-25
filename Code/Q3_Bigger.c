// Q.Write a program to find the largest of three numbers entered by the user.
// ans
#include <stdio.h>

int main() {
    int a, b, c, largest;
    printf("Enter the value of A: ");
    scanf("%d", &a);
    printf("Enter the value of B: ");
    scanf("%d", &b);
    printf("Enter the value of C: ");
    scanf("%d", &c);

    largest = a; // Assume a is the largest initially

    if (b > largest) {
        largest = b; // If b is larger than largest, update largest to b
    }
    if (c > largest) {
        largest = c; // If c is larger than largest (which may have been updated in the previous step), update largest to c
    }

    printf("The largest number is %d\n", largest);

    return 0;
}
