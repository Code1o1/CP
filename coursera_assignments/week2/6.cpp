// Last Digit of the Sum of Fibonacci Numbers

#include<iostream>
using namespace std;
int calSum(int n) {
    if(n==0) return 0;
    int a = 0, b = 1, c;
    int sum = 1;
    for(int i = 1; i < n; i++) {
        c = (a+b)%10;
        a = b;
        b = c;
        sum = (sum + b)%10;
    }
    //cout << "********** "<< endl << sum << endl;
    return sum;
}
int main(){
    long long int  n,q;
    cin >> n;
    int r, m = 10;
    int a = 0, b = 1, c, i;
    for(i = 1; i < m*m + 1 ; i++) {
        c = (a + b) % m;
        a = b;
        b = c;
        if(a == 0 && b == 1) break ;
    }
    r = n % (i);
    q = n / (i);
    q = q%10;
    int x = calSum(r) + q*calSum(i);
    cout << x%10;
    return 0;
    

    
}