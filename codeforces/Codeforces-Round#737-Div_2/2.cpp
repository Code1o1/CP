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
void printv(vi v) {
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

ll getIndex(vll v, ll K)
{
    auto it = find(v.begin(), v.end(), K);
 
    // If element was found
    if (it != v.end())
    {
     
        // calculating the index
        // of K
        ll index = it - v.begin();
        return index;
    }
    else {
        // If the element is not
        // present in the vector
        return 1;
    }
}
void solve(){

    ll n,k;
    cin >> n >> k;
    ll temp = 1, res = 1;
    vll v = inputvector(n);

   

    vll v1 = v;
    sort(all(v1));
    if(v1 ==v){
        cout << "Yes" << endl;
        return;
    }
    map<int, int> a;
    for(int i = 0; i < n; i++) {
        a[v1[i]] = i; 
    }
    
    for(int i = 0; i < n-1; i++) {
      //  cout << "Enter in loop res="<< res<<endl;
        temp = a[v[i]] ;
        if(temp == n-1){
            res++;// cout << " first res =" << res << endl;
        }
        else {
            // cout << " seconds"<< v1[temp+1] << " "<< v[i+1]<<" " << endl;
            if(v1[temp+1] == v[i+1]) {
                continue;
            }
            else res++;
           //cout << "res"<<res<<el;
        }
    }
 //cout << "**********************"<<el;

  //  cout << res<<endl;
    if(res <= k)
    cout << "Yes"<<endl;
    else
        cout << "No" << endl;
    return;

}
int main(){
   IITK
   #ifdef SANDEEP
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
   #endif
   TC{

    solve();
   }
   return 0;
}