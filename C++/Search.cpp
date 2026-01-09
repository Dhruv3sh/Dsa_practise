#include<bits/stdc++.h>
using namespace std;

int main(){
    int target = 3;
    //** lower bound is used to find the first occurence of the target value or to find the target if it exist in an data structure **/
    //** lower bound search for array **/

    // int arr[] = {1,3,4,6,8};
    // int n = 5;
    // int it = lower_bound(arr, arr+n , target) - arr;

    //** lower bound search for vector **/
    vector<int> arr = {1,3,4,6,8,9};
    int it = lower_bound(arr.begin(), arr.end(), target) - arr.begin();

    //** condition for target value if exist or not **/
    if(it < arr.size() && arr[it] == target){
        cout<< boolalpha <<true;
    }else{ cout<< boolalpha << false; };

    return 0;
}