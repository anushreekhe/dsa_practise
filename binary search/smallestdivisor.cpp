//leetcode 875
//leetcode33
#include<bits/stdc++.h>
using namespace std;
int func(vector<int>& nums, int mid){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=ceil(double(nums[i])/mid);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
       int n=nums.size();
       int maxi=*max_element(nums.begin(),nums.end());
       if(threshold==n) return maxi;
       int low=1,high=maxi;
       int ans;
       while(low<=high){
        int mid=(low+high)/2;
        int t=func(nums,mid);
        if(t<=threshold){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
       } 
       return ans;
    }
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
   int h;
   cin >> h;
    cout << smallestDivisor(v,h);
}