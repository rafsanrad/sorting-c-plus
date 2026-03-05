#include <iostream>
using namespace std;

int main() {
    int arr[] = {64, 25, 12, 22, 11}; // Unsorted array
    int n = 5;

    for(int i = 0; i < n - 1; i++) {
        // Find the minimum value in the remaining array
        int minValue = arr[i];
        int minIndex = i;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] < minValue) {
                minValue = arr[j];
                minIndex = j;
            }
        }

        // Swap minimum value with current position
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}