#include <bits/stdc++.h>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--){
         int a,b;
         int res=0;
         cin>> a;
         vector<int> v;
        for(int i;i<a;i++){
            
            cin>> b;
            if(b%2!=0){
            v.push_back(b);
            }
            else{
                v.insert(v.begin(), b);
            }
        }    res=0;
            for(int j=0;j<a-1;j++){
                for(int k=j+1;k<a;k++){
                if((__gcd(v[j],(2*v[k]))) >1){
                    res++;
                }
                }
            }
            cout<< res <<endl;
        
         
    
     }
}