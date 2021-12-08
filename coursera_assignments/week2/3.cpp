// Greatest Common Divisor
#include<iostream>
using namespace std;
int main(){
    long long int a,b,temp;
    cin >> a >> b;
    if(a > b){
        temp = a;
        a = b;
        b = temp;
    }
    while(a){
        temp = b%a;
        b = a;
        a = temp;
    }
    cout << b;
}