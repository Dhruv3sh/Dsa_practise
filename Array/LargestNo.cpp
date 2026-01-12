#include<bits/stdc++.h>
using namespace std;

//** BruteForce  */
void Largest_Num(int arr[], int num){
    int LargestNum = arr[0];
    for(int i=1; i<num; i++){
        if(arr[i] > LargestNum){
            LargestNum = arr[i];
        }
        }
        cout<<LargestNum;
    }
    

int main(){
    int num;
    cin>>num;

    int arr[num];

    for(int i=0; i<num; i++){
        cin>>arr[i];
    }

    Largest_Num(arr, num);

    return 0;
}