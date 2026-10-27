#include <iostream>
using namespace std;

// Function to perform Insertion Sort
void insertionSort(int arr[], int n) {
    // Start from the second element (index 1)
    for (int i = 1; i < n; i++) {
        int key = arr[i]; // Element to be placed in the sorted subarray
        int j = i - 1;

        /* Move elements of arr[0..i-1] that are greater than the key
           to one position ahead of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // Shift element to the right
            j = j - 1;           // Move to the left element
        }
        
        // Place the key into its correct sorted position
        arr[j + 1] = key;
    }
}

// Utility function to print the array elements
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int n;

    cout << "------ Insertion Sort Implementation ------\n";
    cout << "Enter the number of elements: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nOriginal Array: ";
    printArray(arr, n);

    // Call insertion sort function
    insertionSort(arr, n);

    cout << "Sorted Array:   ";
    printArray(arr, n);

    // Deallocate dynamic memory
    delete[] arr;
    return 0;
}