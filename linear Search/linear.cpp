#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int key;
    cout<<"Enter the number to search : ";
    cin >> key;
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Found at position " << i + 1;
            return 0;
        }
    }

    cout << "Not Found";

    return 0;
}