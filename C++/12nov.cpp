#include <iostream>

using namespace std;

// Bubble sort using recursion (one pass)
void bubbleSortRecursivePass(int arr[], int n, int i)
{
    if (i == n - 1)
    {
        return;
    }

    if (arr[i] > arr[i + 1])
    {
        // Manual swap without std::swap
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }

    bubbleSortRecursivePass(arr, n, i + 1);
}

// Complete bubble sort using recursion
void bubbleSort(int arr[], int n, int passes = 0)
{
    if (passes == n - 1)
    {
        return;
    }

    bubbleSortRecursivePass(arr, n, 0); // One pass
    bubbleSort(arr, n, passes + 1);     // Recur for next pass
}

// Binary search function (iterative)
int binarySearch(int arr[], int left, int right, int x)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }

        if (arr[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1; // Element is not present in array
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Enter element to search: feom 64, 34, 25, 12, 22, 11, 90"<< endl;
    int x;
    if (!(cin >> x))
    {
        cerr << "Invalid input. Please enter an integer." << endl;
        return 1; // Indicate an error
    }

    bubbleSort(arr, n);

    int result = binarySearch(arr, 0, n - 1, x);

    if (result == -1)
    {
        cout << x << " is not present in array" << endl;
    }
    else
    {
        cout << x << " is present at index " << result << endl;
    }

    return 0;
}