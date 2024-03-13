// swapping using the SWAP functio;;;
// Author   Md Shakil, 821 B65;; For Lab Exp
#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int a, b;
    printf("Enter the value of A: ");
    scanf("%d", &a);
    printf("Enter the value of B: ");
    scanf("%d", &b);
    printf("Before swap: A = %d, B = %d\n", a, b);
    swap(&a, &b);

    printf("After swap: A = %d, B = %d\n", a, b);
    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}