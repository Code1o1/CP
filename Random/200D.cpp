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



#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
int a[205];
vector<int> ways[205];
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n;i++)
    {
        scanf("%d", &a[i]);
        a[i] %= 200;
    }
    int cnt = min(8, n);
    for (int status = 1; status < (1 << cnt);status++)
    {
        vector<int> temp;
        int sum = 0;
        for (int j = 0; j < cnt;j++)
            if(status&(1<<j))
            {
                temp.push_back(j + 1);
                sum = (sum + a[j + 1]) % 200;
            }
        if(ways[sum].size())
        {
            printf("Yes\n");
            printf("%d ", ways[sum].size());
            for (int i = 0; i < ways[sum].size();i++)
                printf("%d ", ways[sum][i]);
            printf("\n");
            printf("%d ", temp.size());
            for (int i = 0; i < temp.size();i++)
                printf("%d ", temp[i]);
            return 0;
        }
        else
            ways[sum] = temp;
    }
    printf("No");
    return 0;
}