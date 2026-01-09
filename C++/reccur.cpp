#include<bits/stdc++.h>
using namespace std;

//** this function will print the string i no. of time usibng recursion */
void f(string n, int i){
    if(i == 0) return;
    cout<<n<<endl;
    f(n, i-1);
}

int main(){
    string n;
    getline(cin ,n); //** this will take the entire string */
    
    //** this will store how many time a user want to print the string **//
    int i;
    cin>>i;

    f(n , i);
    return 0;
}