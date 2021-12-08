#include<bits/stdc++.h>
using namespace std;
int main(){
 #ifdef SANDEEP
  freopen("inputf.txt", "r", stdin);
  freopen("outputf.txt", "w", stdout);
 #endif
int t;
cin>>t;
while(t--){
	int n;
	int k=n-1;
	int flag=k;
	cin>>n;
	while(flag){
		if(n&k==0){
			flag=0;
		}
		else{
			n=n&k;
			k=k-1;
			flag--;

		}
		
	}
}

return 0;
}