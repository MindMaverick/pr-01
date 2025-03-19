#include <iostream>
using namespace std;

void insertionsort(int array[], int n) // Changed from 'insertioinsort' to 'insertionsort'
{
    for (int i = 1; i < n; i++)
    {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}



void printarray(int array[], int n){
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
    cout << endl;
    return; // Added return statement to avoid unwanted output
}

int main()
{
    int array[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(array) / sizeof(array[0]);

    cout << "Unsorted array: ";
    printarray(array, n);
    insertionsort(array, n); // This call is now correct
    cout << "Sorted array: ";
    printarray(array, n);
    return 0;
}