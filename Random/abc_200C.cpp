#include<bits/stdc++.h>
using namespace std;
int main(){
 #ifdef SANDEEP
  freopen("inputf.txt", "r", stdin);
  freopen("outputf.txt", "w", stdout);
 #endif
	int n,res=0;
	long int arr[n];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>arr[i] ;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++)
			if((arr[i]-arr[j])%200==0)
				res++;
	
	}
	cout<<res <<endl;
	return 0;
}