#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <string>
#include <utility>
#define ll long long int
using namespace std;

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define tr(c, it) for (auto it = (c).begin(); (it) != (c).end(); it++)
#define pres(c, val) ((c).find(val) != (c).end())      // for sets, multisets, maps etc.


void solve(void){
    
    int n; //cin>>n;
    n = (rand()%100 + 1)/5;
    int a[n]; deque<int> dq;

    for(int i=0; i<n; i++){
        //cin>>a[i];
        a[i] = rand()%n + 1;
        if(i==0){
            dq.push_front(a[0]);
        }else{
            if(a[i]<dq.front()){
                dq.push_front(a[i]);
            }else{
                dq.push_back(a[i]);
            }
        }
    }


	int v[n];
    vector<int> res;
    for(int i = 0;i<n;i++) v[i] = a[i];
	res.push_back(v[0]);
	ll f = v[0];
	
	for(int i = 1; i < n; i++){
		if(v[i] <= f){ res.insert(res.begin(), v[i]); f = v[i]; } // begin
		else res.push_back(v[i]);
    }
    int x = 0;
    vector<int> h;
    //cout << "sol of x" << endl;
	for(auto i=dq.begin(); i!=dq.end(); i++){
        //cout<<(*i)<<' ';
        h.push_back(*i);
        
    }
   // cout << endl<< "sol of s"<< endl;
    for(int i = 0;i< res.size();i++){
        //cout << res[i] << ' ';
    }
    if(h == res)cout << "Yes";
    else {
        for(int i = 0; i < n; i++){
            cout << a[i] << " " ;
        }
        cout << endl;
        for(auto i=dq.begin(); i!=dq.end(); i++){
        cout<<(*i)<<' ';
       // h.push_back(*i);
        
    }
    cout << endl<< "sol of s"<< endl;
    for(int i = 0;i< res.size();i++){
        cout << res[i] << ' ';
    }
    cout << "NO"<<endl;
    }
    return;
}
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif



{
    int TEST_CASES= rand()%1000+1;
    //cin>>TEST_CASES;

    for(int TEST_NUM=1; TEST_NUM<=TEST_CASES; TEST_NUM++){
    //    cout<<"Case #"<<TEST_NUM<<": ";
        solve();
        cout << endl;
    }

    return 0;
}



// {
//     solve();
//     return 0;
// }


}
