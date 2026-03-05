#include <iostream>
using namespace std;

int main() {
    int arr[] = {9, 5, 1, 4, 3};   // Unsorted array
    int n = 5;

    // Insertion Sort
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}