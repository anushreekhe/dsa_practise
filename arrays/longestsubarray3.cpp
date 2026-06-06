#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int left=0, right=0;
    int sum=v[0];
    int maxLen=0;
    int k;
    cin >> k;
    while(right<n){
        while(left<=right && sum>k){
            sum=sum-v[left];
            left++;
        }
        if(sum==k){
            maxLen=max(maxLen , right-left+1);
        }
        right++;
        if(right<n) sum=sum+v[right];
    }
    cout << maxLen;

}