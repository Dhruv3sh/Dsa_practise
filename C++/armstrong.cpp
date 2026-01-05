#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int x){
    int sum = 0;
    int temp = x;
    int power = 0;
    while(temp!=0){
        temp /=10;
        power++;
    }
    temp = x;
    while(temp!=0){
        int lastDigit = temp%10;
        sum += pow(lastDigit, power);
        temp /=10;
    }
    return sum == x;
}

int main(){
    cout<<boolalpha<<isArmstrong(1634);
    return 0;
}