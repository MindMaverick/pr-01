#include <iostream>
#include <vector>
#include<bits/stdc++.h> 

using namespace std;

// Partition function to place pivot at the correct position
int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[high]; // Choosing the last element as pivot
    int i = low - 1;       // Index of smaller element

    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    // Swap pivot to its correct position
    swap(arr[i + 1], arr[high]);
    return i + 1; // Return pivot index
}

// Quick Sort function
void quicksort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pivotIndex = partition(arr, low, high);

        quicksort(arr, low, pivotIndex - 1);  // Sort left half
        quicksort(arr, pivotIndex + 1, high); // Sort right half
    }
}

// Helper function to print the array
void printArray(const vector<int> &arr)
{
    for (int num : arr)
        cout << num << " ";
    cout << endl;
}

// Driver code
int main()
{
    vector<int> arr = {5, 3, 8, 6, 2, 7, 4, 1};

    cout << "Original array: ";
    printArray(arr);

    quicksort(arr, 0, arr.size() - 1);

    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}
