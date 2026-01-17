#include<bits/stdc++.h>
using namespace std;

void SwapNonZero(int arr[], int n){
    //** Bruteforce */
    // int j=0;
    // for(int i=1; i<n; i++){
    //     if(arr[j]!= 0) j++;
    //     if(arr[i] == 0) i++;
    //     if(arr[i]>=n) return;
    //     if(arr[j]<arr[i]){
    //         swap(arr[j], arr[i]);
    //     }
    // }

    //** Optimal Solution */
    int j=-1;
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }
    for(int i=j+1; i<n; i++){
        if(arr[i]!= 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    //** It compares the value if 0 it pushes it to the back **//
    SwapNonZero(arr, n); /

    for (int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}