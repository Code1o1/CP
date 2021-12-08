#include <bits/stdc++.h>
using namespace std;

void swap(int* a, int* b){
     int temp=*a;
     *a=*b;
     *b=temp;
     return;
   }

void selectionSort(int arr[],int n){
       int i,j,min_i;
       for(i=0;i<n;i++){
           min_i=i;
           for(j=i+1;j<n;j++){
              if(arr[min_i]>arr[j]){
                min_i=j;
            }
           }
           swap(&arr[i],&arr[min_i]);
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
#ifndef ONLINE_JUDGE
    
    freopen("output.out", "w", stdout);
#endif

    int arr[] = {64, 25, 12, 22, 11};
    int n= sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    cout<< "hiiii";
}
