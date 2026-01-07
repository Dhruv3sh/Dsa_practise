#include <iostream>
using namespace std;

int main(){
int n = 12354;
while(n>0){
        int lastDigit = n%10;
        cout<<lastDigit<<endl;
        n = n/10;
    }
    return 0;
}