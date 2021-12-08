#include<bits/stdc++.h>
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
#define TEST_CASES         int t; cin >> t; while(t--)
#define fastio            ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ignore            cin.ignore(256,'\n');
//-*********************************************************************************
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


void solve(){
    ll a,n,b;
	ll res = 0;
    ll x = 0;
	cin >> n >> b;
    a=n;
    n=n-1;
   if (n % 4 == 0) x = x^n;
   // return n;
 
  // If n%4 gives remainder 1
   else if (n % 4 == 1) x = x^1;
    //return 1;
 
  // If n%4 gives remainder 2
   else if (n % 4 == 2) x = x^(n+1);
    //return n + 1;
 
  // If n%4 gives remainder 3
   else x = x^0;

	//
    if(x == b) res = a;
	else{
    	if((x^a) == b) res = a+2;
        else res = a + 1;
}
cout << res<<endl;
return;
}


int main(){
   fastio
   #ifdef SANDEEP
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
   #endif
    TEST_CASES {
    solve();
    }
    auto end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff = end_time - start_time;
    #ifndef ONLINE_JUDGE
    cerr << "Time Taken : " << diff.count() << "s\n";
    #endif
   return 0;
}