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
    if (c == '1' || c == '3' || c == '5' || c == '7' || c == '9') return true;
    else return false; }
vi inputvector(ll n) {
   vi v; ll x;
   f(i,n) { cin >> x; v.push_back(x); } return v; }
void printv(vll v) {
   f(i,v.size()) cout << v[i] << " ";
   cout << el;
}  //print vector
//******************************************************************************************
int findMaximum(vector<int> A, int low, int high)
{
 
    /* Base Case: Only one element is present in arr[low..high]*/
    if (low == high)
        return low;
     
    /* If there are two elements and first is greater then
        the first element is maximum */
    if ((high == low + 1) && A[low] >= A[high])
        return low;
     
    /* If there are two elements and second is greater then
        the second element is maximum */
    if ((high == low + 1) && A[low] < A[high])
        return high;
     
    int mid = (low + high)/2; /*low + (high - low)/2;*/
     
    /* If we reach a point where arr[mid] is greater than both of
        its adjacent elements arr[mid-1] and arr[mid+1], then arr[mid]
        is the maximum element*/
    if ( A[mid] > A[mid + 1] && A[mid] > A[mid - 1])
        return mid;
     
    /* If arr[mid] is greater than the next
        element and smaller than the previous
        element then maximum lies on left side of mid */
    if (A[mid] > A[mid + 1] && A[mid] < A[mid - 1])
        return findMaximum(A, low, mid-1);
         
        // when arr[mid] is greater than arr[mid-1]
        // and smaller than arr[mid+1]
    else
        return findMaximum(A, mid + 1, high);
}
int bs(vector<int> v, int low , int high){
    /* Base Case: Only one element is present in arr[low..high]*/
    if (low == high)
        return low;
     
    /* If there are two elements and first is greater then
        the first element is maximum */
    if ((high == low + 1) && A[low] >= A[high])
        return low;
     
    /* If there are two elements and second is greater then
        the second element is maximum */
    if ((high == low + 1) && A[low] < A[high])
        return high;
     
    int mid = (low + high)/2; /*low + (high - low)/2;*/
     
    /* If we reach a point where arr[mid] is greater than both of
        its adjacent elements arr[mid-1] and arr[mid+1], then arr[mid]
        is the maximum element*/
    if ( A[mid] > A[mid + 1] && A[mid] > A[mid - 1])
        return mid;
     
    /* If arr[mid] is greater than the next
        element and smaller than the previous
        element then maximum lies on left side of mid */
    if (A[mid] > A[mid + 1] && A[mid] < A[mid - 1])
        return findMaximum(A, low, mid-1);
         
        // when arr[mid] is greater than arr[mid-1]
        // and smaller than arr[mid+1]
    else
        return findMaximum(A, mid + 1, high);
}
void solve(){
    ll n;
    cin >> n;
    vi v = inputvector(n);

    int max =  findMaximum(v,0,n-1);
   ll key;
   ll l=0;
   ll r = n - 1;
   ll temp;
   cin >> key;
   int flag = 0;
   while(r >= l) {
    temp = v[(r + l) / 2];
      if (temp == key) {
        flag = 1;
        break;
    }
      else if(temp < key){
        l = (r + l) / 2 + 1;
      }
      else {
        r = (r + l) / 2 - 1;
    }
   }
   if(flag == 1){
   cout << "Yes" << endl;
   }
   else{ cout << "No" << endl;

    
 

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