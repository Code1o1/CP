#include <bits/stdc++.h>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--){
         int a,b,c,d;
         cin>> a >> b >> c >> d;
         int e=max(a,b);
         int f=max(c,d);
         if( e< c && e<d){
             cout<<"NO"<<endl;
         }
         else if(f<a && f<b){
             cout<<"NO"<<endl;
         }
         else {
             cout <<"YES"<<endl;
         }

     }
}