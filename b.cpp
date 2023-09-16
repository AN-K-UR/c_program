#include <iostream>
#include <vector>

using namespace std;

// Function to partition the array into two subarrays based on the pivot
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // Choose the last element as the pivot
    int i = (low - 1); // Index of the smaller element

    for (int j = low; j <= high - 1; j++) {
        // If the current element is smaller than or equal to the pivot
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]) ;
            // see git change
        }
    }

    // Swap the pivot element with the element at (i + 1), putting the pivot in its correct position
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

// Function to perform Quick Sort
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        // Partition the array into two subarrays and get the pivot index
        int pivotIndex = partition(arr, low, high);

        // Recursively sort the subarrays
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    vector<int> arr = {3, 6, 8, 10, 1, 2, 1};
    int n = arr.size();

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    quickSort(arr, 0, n - 1);

    cout << "\nSorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
