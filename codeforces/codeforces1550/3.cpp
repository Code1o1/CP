    #include<bits/stdc++.h>
    using namespace std;
    using namespace chrono;
     
    #define ff              first
    #define ss              second
    #define pb              push_back
    #define ppb 			pop_back
    #define int 			long long 
    #define all(x) 			(x).begin(), (x).end()
    #define pii             pair<int,int>
    #define vi              vector<int>
    #define mii             map<int,int>
    #define pqb             priority_queue<int>
    #define pqs             priority_queue<int,vi,greater<int> >
    #define setbits(x)      __builtin_popcountll(x)
    #define mod             1000000007
    #define mod1			998244353
    #define inf             1e18
    #define ps(x,y)         fixed<<setprecision(y)<<x
    #define mk(arr,n,type)  type *arr=new type[n];
    #define range(a,b)		substr(a,b-a+1)
    #define w(x)            int x; cin>>x; while(x--)
    #define trace(x) 		cerr<<#x<<": "<<x<<" "<<endl;
    #define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
     
    #ifndef ONLINE_JUDGE
    #define dbg(x) cerr << #x <<" "; _print(x); cerr << endl;
    #else
    #define dbg(x)
    #endif
     
    void _print(int t) {cerr << t;}
    void _print(string t) {cerr << t;}
    void _print(char t) {cerr << t;}
    void _print(double t) {cerr << t;}
     
    template <class T, class V> void _print(pair <T, V> p);
    template <class T> void _print(vector <T> v);
    template <class T> void _print(set <T> v);
    template <class T, class V> void _print(map <T, V> v);
    template <class T> void _print(multiset <T> v);
    template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
    template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]"<<endl;}
    template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
    template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
    template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
     
    int gcd(int a, int b){if (b == 0)return a;return gcd(b, a % b);}
    int lcm(int a, int b){return (a / gcd(a, b)) * b;}
    int power(int x, unsigned int y, int p){int res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}
    int mod_inverse(int a, int p){return power(a, p - 2, p);}
    void swap(int &x, int &y) {int temp = x; x = y; y = temp;}
    vector<int> sieve(int n) {int*arr = new int[n + 1](); vector<int> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
    int mod_add(int a, int b, int m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
    int mod_mul(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
    int mod_sub(int a, int b, int m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
    int mod_div(int a, int b, int m) {a = a % m; b = b % m; return (mod_mul(a, mod_inverse(b,m), m) + m) % m;}  //only for prime m
    int modfact(int n, int p){if (p <= n)return 0;int res = (p - 1);for (int i = n + 1; i < p; i++)res = (res * mod_inverse(i, p)) % p;return res;}
    int fact(int n){if (n == 0)return 1;return n * fact(n - 1);}
     
    bool check(int p,int q,int r){
    	if((r>=q && q>=p)||(r<=q && q<=p)){
    			return true;
    	}
    	return false;
    }
     
    void solve(){
    	int n;
    	cin>>n;
    	
    	vi a(n);
    	int ans=n*2-1;
    	for(int i=0;i<n;i++){
    		cin>>a[i];
    	}
     
    	for(int i=0;i<n-2;i++){
    		int p=a[i];
    		int q=a[i+1];
    		int r=a[i+2];
     
    		if((r>=q && q>=p)||(r<=q && q<=p)){
    			ans--;
    		}
    		ans++;
    	}
     
    	for(int i=0;i<n-3;i++){
    		int p=a[i];
    		int q=a[i+1];
    		int r=a[i+2];
    		int z=a[i+3];
     
    		if(check(p,q,r) || check(p,q,z) || check(p,r,z) || check(q,r,z)){
    			ans--;
    		}
    		ans++;
    	}
    	cout<<ans<<endl;
     
    }
     
    int32_t main(){
    	FIO;
    	#ifndef ONLINE_JUDGE
    	freopen("Error.txt", "w", stderr);
    	#endif
     
    	auto start1 = high_resolution_clock::now();
    	w(t)
    	solve();
    	auto stop1 = high_resolution_clock::now();
    	auto duration = duration_cast<microseconds>(stop1 - start1);
     
    	#ifndef ONLINE_JUDGE
    	cerr << "Time: " << duration . count() / 1000 << " ms" <<endl;
    	#endif
    	return 0;
    }