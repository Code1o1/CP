#include<bits/stdc++.h>
#include <iostream>

#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <string>
#include <utility>
using namespace std;
 
const auto start_time = std::chrono::high_resolution_clock::now();
 
#define el  "\n"
#define ll    long long int
#define vi    vector<int>
#define vll   vector<ll>
#define vvi   vector < vi >
#define pii   pair<int,int>
#define pll   pair<long long, long long>
#define mod   1000000007
#define inf   1000000000000000001
#define all(c)  c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
 
#define f(i,n)     for(ll i = 0; i < n; i ++)
#define sq(a)      (a)*(a)
#define pb         push_back
#define TEST_CASES        long long int t; cin >> t; while(t--)
#define fastio            ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ignore            cin.ignore(256,'\n');
//+*******************************************************************************************
bool isPrime(ll n){if (n < 1) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;}
ll factorial(ll n){
    if (n == 0) return 1;
    else  return n * factorial(n - 1); }
bool isVowel(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o') return true;
    else return false;}
bool isOdd(char c) {
    if (c == '1' || c == '3' || c == '5' || c == '7' || c == '9') return true;
    else return false; }
vll inputvector(ll n) {
   vll v; ll x;
   f(i,n) { cin >> x; v.push_back(x); } return v; }
void printv(vll v) {
   f(i,v.size()) cout << v[i] << " ";
   cout << el;
}  //print vector
//+*********************************************************************************************
 
void solve(){
	int n;
	cin >> n;
	vll v = inputvector(n);
	vll res;
	res.pb(v[0]);
	ll f = v[0];
	
	for(int i = 1; i < n; i++){
		if(v[i] <= f){ res.insert(res.begin(), v[i]); f = v[i]; } // begin
		else res.pb(v[i]);
    }
    cout << "s" << "  ";
	printv(res);

    int a[n]; deque<int> dq;

    for(int i=0; i<n; i++){
    // cin>>a[i];
        if(i==0){
            dq.push_front(v[0]);
        }else{
            if(v[i]<dq.front()){
                dq.push_front(v[i]);
            }else{
                dq.push_back(a[i]);
            }
        }
    }
    cout << "x"<< " ";
    for(auto i=dq.begin(); i!=dq.end(); i++){
        cout<<(*i)<<' ';
    }
    cout << endl;
return;
}
void solve1(void){
    
    int n; cin>>n;
    int a[n]; deque<int> dq;

    for(int i=0; i<n; i++){
        cin>>a[i];
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

    for(auto i=dq.begin(); i!=dq.end(); i++){
        cout<<(*i)<<' ';
    }
    cout << endl;
}
 
int main(){
   fastio
   #ifdef SANDEEP
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
   #endif
   TEST_CASES{
    solve();
    }
    auto end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff = end_time - start_time;
    #ifndef ONLINE_JUDGE
    cerr << "Time Taken : " << diff.count() << "s\n";
    #endif
   return 0;
}