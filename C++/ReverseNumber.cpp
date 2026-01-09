#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int revNum = 0;
    while(n>0){
        int ld = n%10;
        n /= 10;
        revNum = (revNum * 10) + ld;
    }

    cout<< revNum;
    return 0;
}