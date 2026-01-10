#include<bits/stdc++.h>
using namespace std;

void Selection_Sort(int arr[], int n){
    for(int i=0; i<n-1; i++ ){
        int min = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min]) min=j;
        }
        swap(arr[i],arr[min]);
    }
}

void Bubble_Sort(int arr[], int n){
    for(int i=n-1; i>=1; i--){
        for(int j=0; j<i; j++){
            if(arr[j]>arr[j+1]) swap(arr[j], arr[j+1]);
        }
    }
}

void Insertion_Sort(int arr[], int n){
    for(int i=0; i<=n-1; i++){
        int j =i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // Selection_Sort(arr, n);
    // Bubble_Sort(arr, n);
    Insertion_Sort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}