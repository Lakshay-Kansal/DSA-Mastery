//   PROBLEM : FIND MISSING ELEMENT IN AN ARRAY
//   LINK : geekforgeeks --- missing in array
//   APPROACH : (total sum till "n" term)-(sum of all term present in array) 


class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
    int size = arr.size();
    long long sumOfNaturalNumbers = ((long long )(size+1)*(size+2))/2;
    long long sumOfGivenArray=0;
    for(long long i=0;i<size;i++){
        sumOfGivenArray+=arr[i];
    }
    return (int)sumOfNaturalNumbers-sumOfGivenArray;
    }
};