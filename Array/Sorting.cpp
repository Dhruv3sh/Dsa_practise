#include<bits/stdc++.h>
using namespace std;

//** Selects the minium from entire array and swap */
void Selection_Sort(int arr[], int n){
    cout<<"Selection Sort\n";
    for(int i=0; i<=n-2; i++){
        int min= i;
        for(int j=i+1; j<=n-1; j++){
            if(arr[j] < arr[min]) min=j;
        }
        swap(arr[i], arr[min]);

    }
}

//** Push the maximum to the last with the help of adjacent swaps */
void Bubble_Sort(int arr[], int n){
    cout<<"Bubble Sort\n";
    for(int i=n-1; i>=1; i--){
        int swaped = 0;
        for(int j=0; j<=i; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swaped++;
            }
        }
        if (swaped == 0) break;
    }
}

//* Selects the element and place it in its correct place, starts from index 0 and then *//
//* compare *//
void Insertion_Sort(int arr[], int n){
    cout<<"Insertion Sort\n";
    for(int i=0; i<=n-1; i++){
        int j=i;
        while(j>0 && arr[j-1] > arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n; i++){
        cin>>arr[i];
    }

    // Selection_Sort(arr, n);
    // Bubble_Sort(arr, n);
    Insertion_Sort(arr, n);

    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    return 0;
}