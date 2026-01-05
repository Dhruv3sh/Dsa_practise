//** backtracing recursuion **//

#include<bits/stdc++.h>
using namespace std;

void f(int i, int n){
    if(i>n){
        return;
    }
    f(i+1,n); //recursively calls the function until the above condition and then starts cout from last recursive call.
    cout<<i<<'\n';
}

main(){
    int n;
    cin >> n;//4
    f(1,n);
    return 0;
}