#include <iostream>
using namespace std;

void Merge(int A[], int L[],int R[], int nL , int nR)
{
    int i, j, k;
    i = j = k = 0;
    while (i < nL && j < nR)
    {
        if (L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < nL)
    {
        A[k] = L[i];
        i++;
        k++;
    }

    while (j < nR)
    {
        A[k] = R[j];
        j++;
        k++;
    }
}

void MergeSort(int A[], int n)
{
    if (n < 2)
        return;

    int mid = n / 2;

    int L[mid];
    int R[n - mid];

    for (int i = 0; i < mid; i++)
        L[i] = A[i];

    for (int i = mid; i < n; i++)
        R[i - mid] = A[i];

    MergeSort(L, mid);
    MergeSort(R, n - mid);

    Merge(A, L ,R, mid, n - mid);
}

int main()
{
    int A[] = {8, 3, 6, 1, 9, 2, 5, 7, 4};

    int n = sizeof(A) / sizeof(A[0]);

    MergeSort(A, n);

    cout << "Sorted Array: ";

    for (int i = 0; i < n; i++)
        cout << A[i] << " ";

    return 0;
}


// //for practice
// #include<iostream>
// using namespace std;

// void Merge(int A[],int L[],int R[],int nL,int nR)
// {
//     int i,j,k;
//     i=j=k=0;
//     while(i<nL && j<nR){
//         if(L[i]<=R[j]){
//             A[k]=L[i];
//             i++;
//         }
//         else{
//             A[k]=R[j];
//             j++;
//         }
//         k++;
//     }
//     while(i<nL){
//         A[k]=L[i];
//         i++;
//         k++;
//     }
//     while(j<nR){
//         A[k]=R[j];
//         j++;
//         k++;
//     }
// }

// void MergeSort(int A[],int n)
// {
//     if(n<2){
//         return;
//     }
//     int mid=n/2;
//     int L[mid];
//     int R[n-mid];
//     for(int i=0;i<mid;i++){
//         L[i]=A[i];
//     }
//     for(int i=mid;i<n;i++){
//         R[i-mid]=A[i];
//     }
//     MergeSort(L,mid);
//     MergeSort(R,n-mid);
//     Merge(A,L,R,mid,n-mid);
// }
// int main(){
//     int A[]={4,6,7,1,2,9};
//     int n=sizeof(A)/sizeof(A[0]);
//     MergeSort(A,n);
//     cout<<"Sorted Array : ";
//     for (int i = 0; i < n; i++)
//     {
//         cout<<A[i]<<" ";
//     }
    
//     return 0;
// }