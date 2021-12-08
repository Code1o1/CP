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
	int flag=0;
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]!=(i+1))
			flag++;
	}
	if(flag==0)
		cout<< 0 <<endl;
	else if(a[0]==n&&a[n-1]==1)
		cout<< 3 <<endl;
	else if(a[0]==1)
		cout<< 1 <<endl;
	else if(a[n-1]==n)
		cout<< 1 <<endl;
	else
		cout<< 2 <<endl;


}
return 0;
}