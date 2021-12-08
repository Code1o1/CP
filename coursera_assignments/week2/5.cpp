//Fibonacci Number Again
#include <iostream>
using namespace std;
long long int pisanoPeriod(int m){
    int a =0,b=1,c;
    for(int i = 0; i < m*m ; i++) {
        c = (a+b)%m;
        a = b;
        b = c;
        if(a ==0 && b == 1) return i +1 ;
    }
    return 1;
}
int main(){
    long long int n,rem;
    int m;
    cin >> n >> m;
    long long int a, b, c;
    a = 0;
    b = 1;
    rem = n % pisanoPeriod(m);

    for (int i =1; i < rem; i++){
        c = (a+b)%m;
        a = b;
        b = c;
    }
    cout << b;
}