//Last Digit of a Large Fibonacci Number
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a,b,c;
    a = 0;
    b = 1;
    for(int i = 1; i < n; i++){
        c = (a + b)%10;
        a = b;
        b = c;
    }
    cout << b;
}
