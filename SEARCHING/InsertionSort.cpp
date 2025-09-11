//   PROBLEM : INSERTION-SORT IMPLEMENTATION

#include <bits/stdc++.h>
using namespace std;
// INSERTION-SORT FUNCTION
void insertionsort(int arr[],int n){
    for(int i =1; i<n;i++){
       int curr = arr[i];
       int prev = i-1;
       // back-ward  LOOP
       while(prev>=0 && arr[prev]>curr){
        arr[prev+1]=arr[prev];
        prev--;
       }
       arr[prev+1]=curr;
    }
}
// PRINTING OF ARRAY
void printarr(int arr[],int n){ 
for(int i =0; i<n ; i++){
    cout << arr[i] << " ";
}
}
int main(){
int n = 5;
int arr[]={9,5,2,6,1};
insertionsort(arr,n);   //function-call
printarr(arr,n);     // print sorted array
   return 0;
}