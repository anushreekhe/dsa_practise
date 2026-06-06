#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int maxLen=0;
    map<int, int> psm;
    int sum=0;
    int k;
    cin >> k;
    for(int i=0;i<n;i++){
        sum+=v[i];
        if(sum == k) maxLen = i+1;
        int rem = sum-k;
        if(psm.find(rem)!=psm.end()){
            int len=i-psm[rem];
            maxLen=max(maxLen,len);
        }
        if(psm.find(sum) == psm.end()){
            psm[sum]=i;
        }
    }
    cout << maxLen;
}