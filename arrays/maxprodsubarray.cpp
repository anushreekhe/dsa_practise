#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int pref=1, suff=1;
        int ans=INT_MIN;
    for(int i=0;i<n;i++){
        if(pref==0) pref=1;
        if(suff==0) suff=1;
        pref*=v[i];
        suff*=v[n-i-1];
        ans=max(ans,max(pref,suff));
    }
    cout << ans;
}