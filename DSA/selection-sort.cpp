#include<bits/stdc++.h>
using namespace std;

#define endl  "\n"
#define el    endl
#define ll    long long int
#define ld    long double
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
#define f1(i,n)    for(ll i = 1; i <= n; i++)
#define sq(a)      (a)*(a)
#define pb         push_back
#define YES        cout << "YES\n"
#define Yes        cout << "Yes"<<el
#define yes        cout << "yes"<<el
#define NO         cout << "NO\n"
#define No         cout << "No"<<el
#define no         cout << "no"<<el
#define IITK       ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define TC         int t; cin >> t; while(t--)


bool isPrime(ll n)
{
    if (n < 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
ll factorial(ll n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
bool isVowel(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o')
        return true;
    else
        return false;
}
bool isOdd(char c) {
    if (c == '1' || c == '3' || c == '5' || c == '7' || c == '9')
        return true;
    else
        return false;
}
vll inputvector(ll n) {
   vll v;
   ll x;
   f(i,n) {
      cin >> x; 
      v.push_back(x);
   }
   return v;
}
void printv(vll v) {
   f(i,v.size()) cout << v[i] << " ";
   cout << el;
}  //print vector

vvi input2dvector(int r , int c){      //  to take 2d vector input
   vvi v; 
   ll x;
   f(i,r){
      vi v1;
      f(j,c){
         cin >> x; v1.pb(x);
      }
      v.pb(v1);
   }
   return v;
}
void print2dv(vvi v) {          // print a 2d vector
   f(i,v.size()){
      f(j,v[i].size()) cout << v[i][j] << " ";
      cout << endl;
   }
}


void solve(){
ll n, temp;
cin >> n;
vll v = inputvector(n);

f(j ,n - 1) {
    ll x = j ;
    for(ll i = j+1; i < n ; i++){
        if(v[x] > v[i]){
            x = i;
        }
    }
    temp = v[j];
    v[j] = v[x];
    v[x] = temp;
}
printv(v);
   


}
int main(){
   IITK
   #ifdef SANDEEP
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
   #endif
    solve();
   return 0;
}