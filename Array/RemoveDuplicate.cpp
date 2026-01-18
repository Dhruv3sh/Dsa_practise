#include<bits/stdc++.h>
using namespace std;

int Remove_Duplicate(vector<int> &arr, int n){
    int i = 0;
    for(int j =1; j<n; j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(auto it= arr.begin(); it != arr.end(); it++){
        cin>>*(it);
    }
    
    //** For Unsorted array sort the array then pass it to the function */
    // sort(arr.begin(), arr.end());

    int TotalElement = Remove_Duplicate(arr, n);

    for(int i=0; i< TotalElement; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}