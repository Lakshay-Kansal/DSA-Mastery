//   PROBLEM : IMPLEMENTING BINARY-SEARCH USING RECURSION

#include <iostream>
using namespace std;
int Binsearch(int arr[],int target, int start , int end){
    int  mid = (start+end)/2;
    if(arr[mid] == target){ return mid;}
    else if(target>arr[mid]){
        start= mid+1;
        Binsearch(arr,target,start,end);
    }else {
        end = mid-1;
        Binsearch(arr,target,start,end);
    }
}
int main(){
    int target = 78;
    int arr[6]={12,23,34,45,56,78};
    int start = 0 ;
    int end = 6-1;
    cout << Binsearch(arr,target,start,end);
    return 0;
}