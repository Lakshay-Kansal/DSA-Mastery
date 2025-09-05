//   PROBLEM : CHECKING IS ARRAY SORTED OR NOT USING RECURSION

#include <iostream>
using namespace std;
bool isSorted(int arr[],int n){
    if(n==0 || n==1){
        return true;
    }
    return arr[n-1]>arr[n-2] && isSorted(arr,n-1);
}
int main(){
    int size = 7;
        // int arr[size]={23,454,2,54,24,7,100};
        int arr[size]={1,2,3,4,5,6,7};
        cout << isSorted(arr,size);
    return 0;
}