#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    int low=0,high=n;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(pow(mid,m)==n){
            ans=mid;
            break;
        }
        else if(pow(mid,m)<n){
            low=mid+1;
        }
        else high=mid-1;
    }
    cout << ans;
}