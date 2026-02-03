#include<bits/stdc++.h>
using namespace std;

void Sorting(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=n-1; j>i; j--)
        if(arr[j] < arr[j-1]){
            swap(arr[j],arr[j-1]);
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    };

    Sorting(arr,n);
    // Searching(arr,n,5);

    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    return 0;
}