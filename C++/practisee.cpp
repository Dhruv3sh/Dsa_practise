#include<iostream>
using namespace std;

void Reverse(int x, int i){
    if(i<=0) return;
        
    cout<<x*i<<endl;
    Reverse(x, --i);
}

int main() {

    Reverse(5,10);
    return 0;
}