#include<bits/stdc++.h>
using namespace std;
const auto start_time = std::chrono::high_resolution_clock::now();
#define endl  "\n"
#define el     endl
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
//*********************************************************************************
bool isPrime(ll n){if (n < 1) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true; }
ll factorial(ll n){
    if (n == 0) return 1;
    else  return n * factorial(n - 1); }
bool isVowel(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o') return true;
    else return false;}
bool isOdd(char c) {
    if (c == '1' || c == '4' || c == '6' || c == '8' || c == '9') return true;
    else return false; }
vll inputvector(ll n) {
   vll v; ll x;
   f(i,n) { cin >> x; v.push_back(x); } return v; }
void printv(vll v) {
   f(i,v.size()) cout << v[i] << " ";
   cout << el;
}  //print vector
//******************************************************************************************


void solve(){
    ll n, x;
    
    int flag = -1;
    cin >> n;
    vll v(n , 0);
    string s;
    cin >> s;
    f(i,n){
        v[i] = s[i];
        if(isOdd(v[i])) {
            flag = v[i];
            break;
        }
    }
    if(flag!= '-1'){
        cout << "1" << endl << flag << endl;
    }
    else {
        
    }

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