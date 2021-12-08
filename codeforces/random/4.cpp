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
	int n,m;
	int time=0;
	cin>>n>>m;
	std::vector<int> v; 
	std::vector<char> d;
	std::vector<int> ans(n,-1);
	for(int i=0;i<n;i++){
		cin>>v[i];
	for(int i=0;i<n;i++){
	     cin>>d[i];
	int r=std::count(d.begin(), d.end(), "R");
	int l=std::count(d.begin(), d.end(), "L");
while(r!=0&&l!=0){
	time++;
     for(int i=0;i<n;i++){
     	if(d[i]=="R"){
     		v[i]=v[i]+1;
     		if(v[i]+1==m){
     			d[i]="L";
     			l++;
     			r--;
     		}

     	}
     	else{
     		if(d[i]=="L"){
     		v[i]=v[i]-1;
     		if(v[i]-1==0){
     			d[i]="R";
     			r++;
     			l--;
     		}
     	}
     }
}
    for(int i=0;i<n;i++)
    	if(d[i]!="A"){
    	    for(int j=i+1;j<n;j++){
    		     if(v[i]==v[j]&&v[j]!="A"){
    		     	d[i]="A";
    		     	d[j]=="A";
    		     	ans[i]=time;
    		     	ans[j]=time;

    		}
    	}
    }
}
for(int i=0;i<n;i++)
	cout<<ans[i]<<" ";
return 0;
}