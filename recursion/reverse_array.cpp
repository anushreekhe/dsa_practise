#include<bits/stdc++.h>
using namespace std;

void func(int l, int r, vector<int> &v){
    if(l>=r) return;
    swap(v[l], v[r]);
    func(l+1, r-1, v);
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    func(0, n-1, v);
    for(int i=0;i<n;i++) cout << v[i] << " ";
    return 0;
}