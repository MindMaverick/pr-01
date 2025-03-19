#include <iostream>
using namespace std;

// Recursive function to perform bubble sort
void bubbleSort(int arr[], int n)
{
    // Base case
    if (n == 1)
        return;

    // One pass of bubble sort
    // After this pass, the largest element is moved to the end
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            // Swap the elements
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    // Largest element is fixed, recur for remaining array
    bubbleSort(arr, n - 1);
}

// Function to perform binary search
int binarySearch(int arr[], int left, int right, int x)
{
    if (right >= left)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] < x)
            return binarySearch(arr, mid + 1, right, x);

        return binarySearch(arr, left, mid - 1, x);
    }

    // If the element is not present in array
    return -1;
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};

    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "UnSorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    int x = 22; // Element to search for

    // Sorting the array using bubble sort
    bubbleSort(arr, n);

    // Searching the element using binary search
    int result = binarySearch(arr, 0, n - 1, x);

    if (result != -1)
        cout << "Element is present at index " << result << endl;
    else
        cout << "Element is not present in array" << endl;

    // Printing the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
