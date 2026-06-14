//leetcode 35
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int num;
    cin >> num;
    int ans=-1;
    if(num<v[0]) ans=0;
    else if(num>v[n-1]) ans=n;
    else{
        int low=0, high=n-1;
        int mid;
        while(low<=high){
            mid=(low+high)/2;
            if(v[mid]==num){
                ans=mid;
                break;
            }
            else if(mid!=0 && v[mid]>num && v[mid-1]<num){
                ans=mid;
                break;
            }
            else if(mid!=n-1 && v[mid]<num && v[mid+1]>num){
                ans=mid+1;
                break;
            }
            else if(v[mid]<num) low=mid+1;
            else high=mid-1;
        }

    }
    cout << ans;
}