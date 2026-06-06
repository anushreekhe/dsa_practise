#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    vector<int> ans(n);
    int pos=0;
    int neg=1;
    for(int i=0;i<n;i++){
        if(v[i]>=0){
            ans[pos]=v[i];
            pos+=2;
        }
        else{
            ans[neg]=v[i];
            neg+=2;
        }
    }
    for(int i=0;i<n;i++) cout << ans[i] << " ";
}