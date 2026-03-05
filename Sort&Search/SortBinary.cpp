#include <iostream>
using namespace std;

int main() {
    int arr[] = {20, 5, 15, 10, 25};   // Unsorted array
    int n = 5;

    cout << "Unsorted Array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    // -------- Insertion Sort --------
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    cout << "\nSorted Array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    // -------- Binary Search --------
    int search;
    cout << "\nEnter number to search: ";
    cin >> search;

    int low = 0, high = n - 1;
    bool found = false;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == search) {
            cout << "Element found at index " << mid << endl;
            found = true;
            break;
        }
        else if(arr[mid] < search)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(!found)
        cout << "Element not found" << endl;

    return 0;
}