// MERGE-SORT-ALGORITHM

#include <iostream>
#include <vector>
using namespace std;
void Merge(int arr[],int st , int mid ,  int end){
    int i =  st,j=mid+1;
    vector<int>temp;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int i = 0 ; i<temp.size();i++){
        arr[i+st]=temp[i];
    }
}
void MergeSort(int arr[],int st ,int end){
    if(st<end){   
    int mid = st + (end-st)/2;
    MergeSort(arr,st,mid);
    MergeSort(arr,mid+1,end);

    Merge(arr,st,mid,end);
    }
}
int main(){
    int arr[]={44,55,33,77,99,11,88,66};
    MergeSort(arr,0,7);
    for(int i : arr){
        cout << i << " ";
    }
    return 0;
}