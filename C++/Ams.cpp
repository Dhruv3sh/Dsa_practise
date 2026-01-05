#include<bits/stdc++.h>
using namespace std;

//** implemented swap function of int type */
void my_swap(int& i1, int& i2){
    int temp = i1;
    i1 = i2;
    i2 = temp;
}

void revArray(int size, int arr[]){
    int n = size-1;
    for(int i=0; i<size/2; i++){
        my_swap(arr[i], arr[n]);
        n--;
    }
}
//* checking new branch**//
int main(){
   int arr[] = {2,4,6,8,9,10,16,18,20,25,28,30};
   int size = sizeof(arr)/sizeof(arr[0]);
   
   revArray(size ,arr);

   for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
   };
    return 0;
}