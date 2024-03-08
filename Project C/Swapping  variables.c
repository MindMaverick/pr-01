#include <stdio.h>

// Function prototype
void swap(int *a, int *b);

int main()
{
    int a, b, choice;

    printf("Enter two values for a and b: \n");
    scanf("%d %d", &a, &b);

    printf("----Before Swapping----\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Menu for choosing the swapping method
    printf("Choose the swapping method:\n");
    printf("1. Temporary variable\n");
    printf("2. Addition and Subtraction\n");
    printf("3. Bitwise XOR\n");
    printf("4. Pointers\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1: // Using a temporary variable
        swap(&a, &b);
        break;
    case 2: // Using addition and subtraction
        a = a + b;
        b = a - b;
        a = a - b;
        break;
    case 3: // Using bitwise XOR
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
        break;
    case 4: // Using pointers
        swap(&a, &b);
        break;
    default:
        printf("Invalid choice.\n");
        return 1;
    }

    printf("----After Swapping----\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}

// Function to swap values using pointers
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <CUnit/CUnit.h>

// Function prototype
void swap(int *a, int *b);

// Test function for swap
void test_swap()
{
    int a = 10;
    int b = 20;

    // Call the function to be tested
    swap(&a, &b);

    // Verify the result
    CU_ASSERT_EQUAL(a, 20);
    CU_ASSERT_EQUAL(b, 10);
}

int main()
{
    // Initialize the CUnit test registry
    CU_pSuite suite = CU_add_suite("Suite", NULL, NULL);

    // Add the test to the suite
    CU_add_test(suite, "Test swap", test_swap);

    // Run all tests in the suite
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();

    return 0;
}