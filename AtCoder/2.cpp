#include<bits/stdc++.h>
using namespace std;
void reverseStr(string& str){
    long long int n = str.length();
    for (long long int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
int main(){
 #ifdef SANDEEP
  freopen("inputf.txt", "r", stdin);
  freopen("outputf.txt", "w", stdout);
 #endif


std::vector<int> v;
string str;
getline(cin, str);
reverseStr(str);
long long int n = str.length();
for(long long int i=0;i<n;i++){
	//int a=str[i];
	if(str[i]=='6')
		cout<<9;
	else if (str[i]=='9')
		cout<<6;
	else
		cout<<str[i];
}
return 0;
}