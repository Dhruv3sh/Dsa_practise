#include<bits/stdc++.h>
using namespace std;

int MaximumConsecutiveOnes(int arr[],int n){
    int count = 0;
    int max = 0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            count++;
        }
        else if(arr[i] == 0 ){
            if(count > max){
                max = count;
            }
            count = 0;
        }
    }
    return max;
}

int main(){
    int arr[]= {1,0,1,1,1,0,1,1,1,1,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<MaximumConsecutiveOnes(arr, n);

    return 0;
}