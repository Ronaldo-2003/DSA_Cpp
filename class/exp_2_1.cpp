#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

// Function to partition the array
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // Choose the rightmost element as the pivot
    int i = (low - 1); // Index of smaller element

    for (int j = low; j <= high - 1; j++) {
        // If the current element is smaller than or equal to the pivot
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

// Function to perform Quick Sort
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    srand(time(0)); // Seed for random number generation
    int n_values[] = {100, 500, 1000, 5000, 10000}; // Different values of 'n'

    for (int n : n_values) {
        vector<int> arr(n);
        
        // Generate 'n' random numbers
        for (int i = 0; i < n; i++) {
            arr[i] = rand() % 10000; // Adjust the range as needed
        }

        clock_t start_time = clock(); // Start the timer
        quickSort(arr, 0, n - 1); // Sort the array using Quick Sort
        clock_t end_time = clock(); // End the timer
        double elapsed_time = double(end_time - start_time) / CLOCKS_PER_SEC;

        cout << "Time taken to sort " << n << " elements: " << elapsed_time << " seconds" << endl;
    }

    return 0;
}
