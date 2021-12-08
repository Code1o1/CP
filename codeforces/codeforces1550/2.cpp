#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
#endif
  
    int n;
    cin>> n;
    while(n--){
        int m,a,b,ans;
        cin >>m >>a>>b;
        int arr[m];
        string s;
        cin>>s;
        for(int i=0;i<m;i++){
          arr[i]=s[i];
          }


        if(b>=0){
            ans=(a+b)*m;
          }
        else{
            int joints=1;
            for(int i=0;i<m-1;i++){
               if(arr[i]!=arr[i+1]){
                joints++;
              }
            }
            joints=joints/2+1;
            ans=a*m+joints*b;
          }
        

         cout <<ans<<endl;
        
    }
    return 0;
}
