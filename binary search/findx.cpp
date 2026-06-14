#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int num;
    cin >> num;
    int l=0, u=n-1;
    int mid;
    int f=0;
    while(l<=u){
        mid=(l+u)/2;
        if(v[mid]==num){
            cout << mid+1;
            f=1;
            break;
        }
        else if(v[mid]>num) u=mid-1;
        else l=mid+1;
    }
    if(f==0) cout << "not found";
}