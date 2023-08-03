#include <iostream>
using namespace std;

// Merge two subarrays of arr[].
// First subarray is arr[s..mid].
// Second subarray is arr[mid+1..e].
void merge(int *arr, int s, int e) {
    int mid = s + (e - s) / 2;

    // Calculate lengths of two subarrays
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // Create temporary arrays for the subarrays
    int* first = new int[len1];
    int* second = new int[len2];

    // Copy data to the temporary arrays
    int originalArrayIndex = s;
    for(int i = 0; i < len1; i++)
        first[i] = arr[originalArrayIndex++];

    originalArrayIndex = mid + 1;
    for(int i = 0; i < len2; i++)
        second[i] = arr[originalArrayIndex++];

    // Merge the temporary arrays back into arr[s..e]

    // Initial indices of the subarrays
    int index1 = 0;
    int index2 = 0;
    originalArrayIndex = s;

    // Merge the subarrays by comparing elements
    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2])
            arr[originalArrayIndex++] = first[index1++];
        else
            arr[originalArrayIndex++] = second[index2++];
    }

    // Copy the remaining elements of first[], if any
    while(index1 < len1)
        arr[originalArrayIndex++] = first[index1++];

    // Copy the remaining elements of second[], if any
    while(index2 < len2)
        arr[originalArrayIndex++] = second[index2++];

    // Free the temporary arrays
    delete[] first;
    delete[] second;
}

// Recursive function to perform merge sort on arr[]
void mergeSort(int arr[], int s, int e) {
    // Base case: If there is only one element or empty array, return
    if(s >= e)
        return;

    // Find the middle point to divide the array into two halves
    int mid = s + (e - s) / 2;

    // Recursively sort the first and second halves
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);

    // Merge the sorted halves
    merge(arr, s, e);
}

int main() {
    // cout << "Enter the number of elements: ";
    int n;
    cin >> n;

    int* arr = new int[n];

    // cout << "Enter the elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    // Perform merge sort on the input array
    mergeSort(arr, 0, n - 1);

    // Print the sorted array
    // cout << "Sorted array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Free the dynamically allocated memory
    delete[] arr;

    return 0;
}
