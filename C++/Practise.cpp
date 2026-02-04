#include<bits/stdc++.h>
using namespace std;

//reverse bubble sort
void Sorting(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=n-1; j>i; j--)
        if(arr[j] < arr[j-1]){
            swap(arr[j],arr[j-1]);
        }
    }
}

void Searching(int arr[], int n, int target){
    for(int i=0; i<n; i++){
        if(arr[i] == target){
            cout<< "taget index : "<<i<<endl;
            return;
        };
    }
    cout<<"Traget not found"<<endl;
}

//** Sorting and Searching in an array **//
int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    };

    Sorting(arr,n);
    Searching(arr,n,4);

    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    return 0;
}