#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Counting Sort function
void countingsort(vector<int> &arr)
{
    if (arr.empty())
        return; // Handle empty array case

    // Find the maximum value in the array
    int maxVal = *max_element(arr.begin(), arr.end());

    // Create a frequency/count array
    vector<int> count(maxVal + 1, 0);

    // Count occurrences of each element
    for (int num : arr)
    {
        count[num]++;
    }

    // Overwrite original array with sorted elements
    int index = 0;
    for (int i = 0; i <= maxVal; i++)
    {
        while (count[i] > 0)
        {
            arr[index++] = i;
            count[i]--;
        }
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

    countingsort(arr);

    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}
