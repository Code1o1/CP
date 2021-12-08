#include<bits/stdc++.h>
using namespace std;
int t,n,a[200005];
const int k=1e9+7;
signed main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		printf("%d\n",n/2);
		for(int i=0;i<n-1;i+=2)
			printf("%d %d %d %d\n",i+1,i+2,min(a[i],a[i+1]),k);
	}
}