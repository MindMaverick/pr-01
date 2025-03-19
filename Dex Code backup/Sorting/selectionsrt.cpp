#include <iostream>
using namespace std;

void selectionsort(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int mi_ind = i;

        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[mi_ind])
                mi_ind = j;
        }
        swap(array[i], array[mi_ind]);
    }
}

void printarray(int array[], int n){
    for(int i = 0; i < n; i++){
        cout << array[i] << " ";
        if(i % 10 == 9) cout << endl;
    }
}

int main(void){
    int array[] = {64, 25, 12, 22, 11, 90};
    int n = sizeof(array) / sizeof(array[0]);
    cout << "Unsorted array: ";
    printarray(array, n);
    cout << endl;
    selectionsort(array, n);
    cout << "Sorted array: ";
    printarray(array, n);
    return 0;
}