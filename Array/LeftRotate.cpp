#include<bits/stdc++.h>
using namespace std;

// void LeftRotateElement(int arr[], int n){
//     int j = arr[0];
//     for(int i=1; i<n; i++){
//         arr[i-1] = arr[i];
//     };
//     arr[n-1] = j;
// }

void LeftRotateElementByNplaces(int arr[], int n, int d){
    int t = d%n;
    reverse(arr, arr + t);
    reverse(arr + t, arr + n);
    reverse(arr, arr + n);
}

int main(){
    int n; //this is the size of the array
    cin>>n;
    
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int d;// this var is for the num of times a user want to rotate the array
    cin>>d;

    // LeftRotateElement(arr, n); // this function left rotate an element by 1 place
    LeftRotateElementByNplaces(arr , n , d); // this function left rotate an element by n place

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}