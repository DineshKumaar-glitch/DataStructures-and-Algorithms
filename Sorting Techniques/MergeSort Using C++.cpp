//Code for MergeSort Using C++ >>>>>.........
#include <iostream>
using namespace std;
int n ;
void Merge(int arr[] , int l , int m , int r){
    int i = l;
    int j = m+1;
    int k = l;
    int temp[n];
    while(i <= m && j<= r){
        if(arr[i] < arr[j]){
            temp[k] = arr[i];
            i++;
            k++;
        }
        else{
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    while(i<=m){
        temp[k] = arr[i];
        i++;
        k++;
    }
    while(j<=r){
        temp[k] = arr[j];
        j++;
        k++;
    }
    for(int p = l;p<=r;p++){
        arr[p] = temp[p];
    }
}

void MergeSort(int arr[],int l , int r){
    if(l<r){
        int mid = (l+r)/2;
        MergeSort(arr,l,mid);
        MergeSort(arr,mid+1,r);
        Merge(arr,l,mid,r);
    }
}
int main() {
    cout<<"Enter the Number of elements : "<<endl;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Before MergeSort : "<<endl;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    MergeSort(arr,0,n-1);
    cout<<"After MergeSort : "<<endl;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}