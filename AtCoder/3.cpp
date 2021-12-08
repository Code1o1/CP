
#include <bits/stdc++.h>
using namespace std;
 
int compare(const void *a, const void * b){
   return ( *(char *)a - *(char *)b );
}
void swap(char* a, char* b) {
   char t = *a;
   *a = *b;
   *b = t;
}
int finduBound(char str[], char first, int l, int h) {
   int ubound = l;
   for (int i = l+1; i <= h; i++)
      if (str[i] > first && str[i] < str[ubound])
   ubound = i;
   return ubound;
}
void generatePermutaion ( char str[] ,long long int k) {
	int flag=0;
   int size = strlen(str);
   bool isFinished = false;
   while ( ! isFinished ) {
   	   if(flag==k){
      cout<<str<<"\t";}
      int i;
      for ( i = size - 2; i >= 0; --i )
         if (str[i] < str[i+1])
            break;
         if ( i == -1 )
            isFinished = true;
      else {
         int ubound = finduBound( str, str[i], i + 1, size - 1 );
         swap( &str[i], &str[ubound] );
         qsort( str + i + 1, size - i - 1, sizeof(str[0]), compare );
      }
   }
}
int main()
{
  #ifdef SANDEEP
  freopen("inputf.txt", "r", stdin);
  freopen("outputf.txt", "w", stdout);
  #endif
   int a,b;
    cin>>a>>b;
   long long int c;
   cin>>c;
   std::vector<char> v;
   for(int i=0;i<a;i++){
   	v.push_back('a');
   }
    for(int i=0;i<b;i++){
   	v.push_back('b');
   }

    std::string str(v.begin(), v.end());

    generatePermutaion(*str,c);
}

