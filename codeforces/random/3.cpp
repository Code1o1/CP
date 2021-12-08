#include<bits/stdc++.h>
using namespace std;
int main(){
 #ifdef SANDEEP
  freopen("inputf.txt", "r", stdin);
  freopen("outputf.txt", "w", stdout);
 #endif
int t;
cin>>t;
int ans=0;
std::vector<int> v;
for(int i=0;i<t;i++)
	cin>>v[i];
for(int i=0;i<t;i++){
	if(v[i]==1){
		for(int j=1;j<t;j++){
			ans++;
			if(i-j>=0){
				if(v[i-j]==0){
					v[i-j]==2;
					break;
				}

			}
			if(i+j<t){
				if(v[i+j]==0){
					v[i+j]==2;
					break;
				}
			}



			}
		}
	}



cout<<ans<<endl;
return 0;
}