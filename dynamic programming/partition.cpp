//partition into 2 subsets that difference betw sum of both is minimum
#include<bits/stdc++.h>
using namespace std;
int minimumDifference(vector<int>& nums) {
        int tot=accumulate(nums.begin(),nums.end(),0);
        int n=nums.size();
        vector<vector<bool>> dp(n, vector<bool>(tot+1,0));
        for(int i=0;i<n;i++) dp[i][0]=true;
        if(nums[0]<=tot) dp[0][nums[0]]=true;
        for(int i=1;i<n;i++){
            for(int j=1;j<=tot;j++){
                bool  nottake=dp[i-1][j];
                bool take=false;
                if(nums[i]<=j) take=dp[i-1][j-nums[i]];
                dp[i][j]=take|nottake;
            }
        }
        int mini=1e9;
        for(int s1=0;s1<=tot/2;s1++){
            if(dp[n-1][s1]==true){
                mini=min(mini,abs((tot-s1)-s1));
            }
        }
        return mini;
    }
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin >> nums[i];
    int ans=minimumDifference(nums);
    cout << ans;
}