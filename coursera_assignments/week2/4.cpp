// Greatest Common Divisor
#include<iostream>
using namespace std;
int main(){
    long long int a,b,temp,a1,b1;
    cin >> a >> b;
   
    if(a > b){     //calculate gcd
        temp = a;
        a = b;
        b = temp;
    }
     a1 = a; b1 = b; // For further use
    while(a){
        temp = b%a;
        b = a;
        a = temp;
    }
    cout << (b1/b)*a1;    // a*b = gcd(a,b)*LCM(a,b)
}