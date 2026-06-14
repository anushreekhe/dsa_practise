#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int num;
    cin >> num;
    int low=0, high=n-1, mid=(low+high)/2;
    int ans;
    if(num<v[0]) ans=0;
    else if(num>v[n-1]) ans=n;
    else{
        ans=-1;
        while(low<=high){
            mid=(low+high)/2;
            if(v[mid]>=num){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
    }
    cout << ans;
}