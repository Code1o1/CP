#include <bits/stdc++.h>
using namespace std;

int ans(int m,int sum){
     if(sum<=0){
        return  m;
    }else{
       return ans(m+1,sum-2*m-1);
     }

}

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
        int m;
        cin >>m;
         int x=ans(0,m);
         cout <<x<<endl;
    }
    return 0;
}
