//   PROBLEM : TRAPPING RAINWATER
//   LINK : https://leetcode.com/problems/trapping-rain-water
//   APPROACH-01 : PREFIX-MAX/SUFFIX-MAX
//   APPROACH-02 :  TWO-POINTER (l=0,r=n-1)
//   DIFFICUTY : HARD 


class Solution {
public:
int trap(vector<int>& height) {
    // approach-01
    int n = height.size();
    vector<int>lmax(n,0);
    vector<int>rmax(n,0);
    int ans ;
    for(int i = 1 ; i<n ; i++){
        lmax[0]=height[0];
        lmax[i]=max(lmax[i-1],height[i]);
    }
    for(int i = n-2 ; i>=0 ; i--){
        rmax[n-1]=height[n-1];
        rmax[i]=max(rmax[i+1],height[i]);
        }
    for(int j =0 ;j<n ;j++){
        ans += (min(lmax[j],rmax[j])-height[j]);
    }
    return ans ;


    // approeach -02
    int n = height.size();
    int l =0 , r=n-1;
    int lmax=0,rmax=0;
    int ans =0;
    while(l<r){ 
        lmax=max(lmax,height[l]);
        rmax=max(rmax,height[r]);
        if(lmax<rmax){
            ans+=lmax-height[l];
            l++;
        }else{
            ans+=rmax-height[r];
            r--;
        }
    }
    return ans ;
    }
};