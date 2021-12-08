#include<iostream>
using namespace std;
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    return;
}
int partition(int arr[], int start, int end) {
    int x = arr[start];
    int i = start;
    for(int j = i; j < end ; j++){
        if(arr[j+1] <= x) {
            //swap(arr[i+1] , arr[j+1]);
            int temp =  arr[i+1];
            arr[i+1] = arr[j+1];
            arr[j+1] = temp;
            i = i+1;
        }
    }
    //swap(arr[i], arr[start]);
    int temp = arr[i];
    arr[i] = arr[start];
    arr[start] = temp;
    return i;
}
void quickSort(int arr[] ,int  start, int end){
    if(start < end){
        int pivot = partition(arr,start,end);
        quickSort(arr,start, pivot-1);
        quickSort(arr, pivot +1 , end);
    }
    else return;
}
int main() {
    int n;
    cin >> n;
    //n = rand()%10000;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        //arr[i] = rand()%100000;
    }
    quickSort(arr, 0, n-1);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}