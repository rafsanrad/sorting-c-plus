#include <iostream>
using namespace std;
// Partition function
int Partition(int A[], int low, int high)
{
    int pivot = A[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (A[j] < pivot) //change sign for desc.
        {
            i++;

            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    int temp = A[i + 1];
    A[i + 1] = A[high];
    A[high] = temp;

    return i + 1;
}

// Quick Sort function
void QuickSort(int A[], int low, int high)
{
    if (low < high)
    {
        int p = Partition(A, low, high);

        QuickSort(A, low, p - 1);
        QuickSort(A, p + 1, high);
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int A[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    QuickSort(A, 0, n - 1);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}


// // for practicce
// #include<iostream>
// using namespace std;

// int Partition(int A[],int low,int high)
// {
//     int pivot=A[high];
//     int i=low-1;
//     for(int j=low;j<high;j++){
//         if(A[j]<pivot){ 
//             i++;
//             int temp=A[i];
//             A[i]=A[j];
//             A[j]=temp;
//         }
//     }
//     int temp=A[i+1];
//     A[i+1]=A[high];
//     A[high]=temp;
//     return i+1;
// }

// void QuickSort(int A[],int low,int high)
// {
//     if(low<high){
//         int p=Partition(A,low,high);
//         QuickSort(A,low,p-1);
//         QuickSort(A,p+1,high);
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter number of elements : ";
//     cin>>n;
//     int A[n];
//     cout<<"Enter the elements : ";
//     for (int i = 0; i < n; i++)
//     {
//         cin>>A[i];
//     }

//     QuickSort(A,0,n-1);
//     cout<<"Sorted array : ";
//     for (int i = 0; i < n; i++)
//     {
//         cout<<A[i]<<" ";
//     }
    
    
//     return 0;
// }