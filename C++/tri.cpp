#include<bits/stdc++.h>
using namespace std;

int main(){

    for(int i=4; i>=0; i--){

        for(int m=0; m<4-i+1; m++){
            cout<<" ";
        }
        for(int j=0; j<(2*i+1); j++){
            cout<<"*";
        }
        for(int k=0; k<4-i+1; k++){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}