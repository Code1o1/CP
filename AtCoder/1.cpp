#include<bits/stdc++.h>
using namespace std;
int main(){
 #ifdef SANDEEP
  freopen("inputf.txt", "r", stdin);
  freopen("outputf.txt", "w", stdout);
 #endif
  int n;
  int a[n],b[n],c[n];
  for(int i=0;i<n;i++)
  	cin>>a[i];
   for(int i=0;i<n;i++)
  	cin>>b[i];
   for(int i=0;i<n;i++)
  	cin>>c[i];
int res=0;
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
	int x=c[j]-1;
	if(a[i]==b[x]){
		res++;
	}
}
}
cout<<res<<endl;
return 0;
}