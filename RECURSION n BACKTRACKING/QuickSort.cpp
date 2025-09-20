// QUICK-SORT-ALGORITHM

#include <iostream>
using namespace std;
int partition(int arr[],int st ,int end){
    int idx = st-1,j=0;
    int pivot = arr[end];
    for(int i = st; i<=end;i++){
        if(arr[i]<pivot){
            idx++;
            swap(arr[i],arr[idx]);
        }
    }
    idx++;
    swap(arr[end],arr[idx]);
    return idx;
}
void QuickSort(int arr[],int st , int end){
    if(st<end){ 
        int pividx = partition(arr,st,end);
        QuickSort(arr,st,pividx-1);
        QuickSort(arr,pividx+1,end);
    }

}
int main(){
    int arr[]={44,55,33,77,99,11,88,66,22};
    QuickSort(arr,0,8);
    for(int i =0 ;i<9;i++){
        cout << arr[i] << " ";
    }
    return 0;
}