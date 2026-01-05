#include<iostream>
using namespace std;

//** Count Digits **//

int main() {
    int n;
    cin >>n;
    int count = 0;
    while (n>0){
        n%10;
        n /= 10;
        count += 1;
    }

    cout<< count;
    return 0;
}