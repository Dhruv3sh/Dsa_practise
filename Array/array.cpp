#include<bits/stdc++.h>
using namespace std;

//** Array Reverse Using recursion**//
void f(int arr[],int i, int n){
    if(i>=n/2) return; //accessing only half of the array
    swap(arr[i], arr[n-i-1]);
    f(arr, i+1, n);
}

int main(){
      int arr[] = {1, 2, 3, 4, 5}; 
      int n = sizeof(arr) / sizeof(arr[0]);

      f(arr,0,n);

      for(int i=0; i<n; i++){
        cout<<arr[i]<<" " ;
      }

    return 0;
}