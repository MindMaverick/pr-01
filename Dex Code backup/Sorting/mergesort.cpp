#include <iostream>
#include <vector>
// #include <bits/stdc++.h>

using namespace std;

// Merge function to merge two sorted halves
void merge(vector<int> &arr, int start, int mid, int end)
{
    vector<int> temp;
    int i = start, j = mid + 1;

    // Merge the two sorted halves
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    // Copy remaining elements of right subarray (if any)
    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    // Copy sorted elements back into original array
    for (int k = 0; k < temp.size(); k++)
    {
        arr[start + k] = temp[k];
    }
}

// Merge Sort function
void mergesort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        int mid = st + (end - st) / 2;
        mergesort(arr, st, mid);
        mergesort(arr, mid + 1, end);
        merge(arr, st, mid, end);
    }
}

void printArray(const vector<int> &arr)
{
    for (int num : arr)
        cout << num << " ";
    cout << endl;
}

int main()
{
    vector<int> arr = {5, 3, 8, 6, 2, 7, 4, 1};
    int n = arr.size();
    arr.size();
    arr.size();
    cout << "Original array/vector: ";
    printArray(arr);

    mergesort(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}
