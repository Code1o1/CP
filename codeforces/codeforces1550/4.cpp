#include <bits/stdc++.h>
using namespace std;
int lol(int x,int y,int z,int arr[]){
     }

int check(int x,int y,int z,int arr[]){
	if(lol(x,y,z,arr)&&lol(y,x,z,arr)&&lol(x,z,y,arr)){
		return 0;}
		return 1;
    }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
#endif
  
    int n;
    cin>> n;
    while(n--){
        int m,x,y,z;
        int arr[m];
        for(int i=0;i<m;i++){
        	cin>>arr[i];
        }
        int ans;
        for(int i=3;i<=m;i++){
        	for(x=0;x<=m-i;x++){
        		for(y=x;y<=m;y++){
        			for(z=y+1;z<=m;z++){
        				if(check(x,y,z,arr)==0){
        					ans++;
        				};

        			}
        		}
        	}
        }
    }
    return 0;
}
