#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to get the maximum value in the array
int getMax(const vector<int> &arr)
{
    return *max_element(arr.begin(), arr.end());
}

// Counting Sort function for a specific digit place (1s, 10s, 100s, etc.)
void countingSort(vector<int> &arr, int place)
{
    int n = arr.size();
    vector<int> output(n);
    vector<int> count(10, 0); // 10 digits (0-9)

    // Count occurrences of each digit at the given place
    for (int num : arr)
    {
        int digit = (num / place) % 10;
        count[digit]++;
    }

    // Compute cumulative count to determine positions
    for (int i = 1; i < 10; i++)
    {
        count[i] += count[i - 1];
    }

    // Place elements in sorted order based on current digit
    for (int i = n - 1; i >= 0; i--)
    {
        int digit = (arr[i] / place) % 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }

    // Copy sorted elements back to the original array
    arr = output;
}

// Radix Sort function
void radixSort(vector<int> &arr)
{
    int maxVal = getMax(arr); // Find the maximum number

    // Apply Counting Sort for each digit place (1s, 10s, 100s, ...)
    for (int place = 1; maxVal / place > 0; place *= 10)
    {
        countingSort(arr, place);
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
    vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};

    cout << "Original array: ";
    printArray(arr);

    radixSort(arr);

    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}
