#include<iostream>
using namespace std;

void CountingSort(int A[],int B[],int n)
{
    int k=A[1];
    for(int i=2;i<=n;i++){
        if(A[i]>k){
            k=A[i];
        }
    }
    int C[k+1];
    for(int i=0;i<=k;i++){
        C[i]=0;
    }
    for(int i=1;i<=n;i++){
        C[A[i]]++;
    }
    for(int i=1;i<=k;i++){
        C[i]=C[i]+C[i-1];
    }
    for(int i=n;i>=1;i--){
        B[C[A[i]]]=A[i];
        C[A[i]]--;
    }
}
int main(){
    int n;
    cout<<"enter number of elements : ";
    cin>>n;
    int A[n+1],B[n+1];
    cout<<"enter the elements : ";
    for(int i=1;i<=n;i++){
        cin>>A[i];
    }
    CountingSort(A,B,n);
    cout<<"sorted array : ";
    for (int i = 1; i <= n; i++)
    {
        cout<<B[i]<<" ";
    }
    
    return 0;
}