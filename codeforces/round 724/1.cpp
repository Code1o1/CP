#include <bits/stdc++.h>
using namespace std;
int check_good(vector<int> v){
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v.size();j++)
            {
                if(std::find(v.begin(), v.end(), abs(v[0]-v[1])) != v.end()){
                         return 0;
                }
                
            }
        }
        return 1;
}

int main() {
     int t;
     cin>>t;
     while(t--){
        
        int n,a,flag=0;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>a;
            v.push_back(0);
        }

        while (check_good(v)==0 ){
            if(v.size()>=300){
                flag=1;
                break;
            }
        }
     }
}