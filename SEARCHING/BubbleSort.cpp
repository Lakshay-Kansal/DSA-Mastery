//   PROBLEM : BUBBLE-SORT IMPLEMENTATION

#include <bits/stdc++.h>
using namespace std;
// BUBBLE-SORT FUNCTION
void bubblesort(int arr[],int n){
    for(int i =0; i<n-1;i++){
        for(int j =0 ; j<n-i-1 ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
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
bubblesort(arr,n);   //function-call
printarr(arr,n);     // print sorted array
   return 0;
}