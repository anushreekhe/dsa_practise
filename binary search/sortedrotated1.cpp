//leetcode33
#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,high=n-1;
        int mid;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]==target) return mid;
            //left sorted
            if(nums[low]<=nums[mid]){
                if(nums[low]<=target && target<=nums[mid]) high=mid-1;
                else low=mid+1;
            }
            //right sorted
            else{
                if(nums[mid]<=target && target<=nums[high]) low=mid+1;
                else high=mid-1;
            }
        }
        return -1;
    }
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int num;
    cin >> num;
    cout << search(v,num);
}