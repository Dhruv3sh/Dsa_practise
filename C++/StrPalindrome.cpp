#include<bits/stdc++.h>
using namespace std;

int solve(int left, int right, const string &s) {
    // Base case: already a palindrome
    if (left >= right) {
        return 0;
    }

    // If characters match, move inward
    if (s[left] == s[right]) {
        return solve(left + 1, right - 1, s);
    }

    // Try inserting on either side
    int insertLeft = solve(left + 1, right, s);
    int insertRight = solve(left, right - 1, s);

    return 1 + min(insertLeft, insertRight);
}

int minInsertions(string s) {
    return solve(0, s.length() - 1, s);
}

int main() {
    cout << minInsertions("abcda") << endl; 
    cout << minInsertions("race") << endl;  
    cout << minInsertions("a") << endl;     
    return 0;
}
