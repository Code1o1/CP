#include<bits/stdc++.h>
using namespace std;
int main(){
 #ifdef SANDEEP
  freopen("inputf.txt", "r", stdin);
  freopen("outputf.txt", "w", stdout);
 #endif
  long long int n;
  cin>>n;
  long long int a[n],b[n],c[n];
  for(long long int i=0;i<n;i++)
  	cin>>a[i];
   for(long long int i=0;i<n;i++)
  	cin>>b[i];
   for(long long int i=0;i<n;i++)
  	cin>>c[i];
long long int res=0;
for(long long int i=0;i<n;i++){
	for(long long int j=0;j<n;j++){
	long long int x=c[j]-1;
	if(a[i]==b[x]){
		res++;
	}
}
}
cout<<res<<endl;
return 0;
}