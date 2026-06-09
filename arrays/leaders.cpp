#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int maxi=INT_MIN;
    vector<int> ans;
    for(int i=n-1;i>=0;i--){
        if(v[i]>maxi){
            maxi=v[i];
            ans.push_back(v[i]);
        }
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++) cout << ans[i] << " ";
}