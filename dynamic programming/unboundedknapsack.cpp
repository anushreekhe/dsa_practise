#include<bits/stdc++.h>
using namespace std;
int f(int i, vector<int>& wt, vector<int>& p, int maxw, vector<vector<int>>& dp){
    if(i==0){
        return (maxw/wt[0])*p[0];
    }
    if (dp[i][maxw]!=-1) return dp[i][maxw];
    int nottake=f(i-1,wt,p,maxw,dp);
    int take=INT_MIN/2;
    if(wt[i]<=maxw) take=p[i]+f(i,wt,p,maxw-wt[i],dp);
    return dp[i][maxw]=max(take,nottake);
}
int unboundedknapsack(vector<int>& wt, vector<int>& p, int maxw){
    if(maxw==0) return 0;
    vector<vector<int>> dp(wt.size(), vector<int>(maxw+1,-1));
    return f(wt.size()-1,wt,p,maxw,dp);
}
int main(){
    int n;
    cin >> n;
    vector<int> wt(n);
    vector<int> p(n);
    for(int i=0;i<n;i++) cin >> wt[i];
    for(int i=0;i<n;i++) cin >> p[i];
    int maxw;
    cin >> maxw;
    int uk=unboundedknapsack(wt,p,maxw);
    cout << uk;
}