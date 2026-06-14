#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int num;
    cin >> num;
    int low=0, high=n-1, ans=n, mid=(low+high)/2;
    while(low<=high){
        mid=(low+high)/2;
        if(v[mid]>=num){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    cout << ans << endl;
    int lb=lower_bound(v.begin(),v.end(),num)-v.begin();
    cout << lb;
}