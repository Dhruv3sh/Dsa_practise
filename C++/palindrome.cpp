#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
        int reverseNum = 0;
        int temp = x;
        while(temp!= 0){
            int lastDigit = temp%10;
            reverseNum = reverseNum*10 + lastDigit;
            temp /= 10;
        }
        return reverseNum == x;
    }

int main() {
    cout<< boolalpha << isPalindrome(121);
    return 0;
}