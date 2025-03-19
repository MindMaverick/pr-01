#include <iostream>
#include <vector>
using namespace std;

// Function prototype for merge
void merge(int arr[], int st, int mid, int end);

void mergeSort(int arr[], int st, int end)
{
    if (st < end)
    {
        int mid = st + (end - st) / 2;
        mergeSort(arr, st, mid);
        mergeSort(arr, mid + 1, end);
        // merge the array
        merge(arr, st, mid, end);
    }
}

void merge(int arr[], int st, int mid, int end)
{
    vector<int> temp;
    int i = st, j = mid + 1;

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

    // Copy any remaining left elements
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    // Copy any remaining right elements
    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    // Write the sorted elements back to the original array
    for (int idx = 0; idx < temp.size(); idx++)
    {
        arr[st + idx] = temp[idx];
    }
}

int main()
{
    int arr[] = {15, 34, 38, 11, 35, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    // Print sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
