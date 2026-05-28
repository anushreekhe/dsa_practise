#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int maxm=v[0];
    for(int i=1;i<n;i++){
        if(v[i]>maxm) maxm = v[i];
    }
    cout << maxm;
}