#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int k;
    cin >>k;
    map<int, int> mpp;
    for(int i=0;i<n;i++){
        int a=v[i];
        int more=k-a;
        if(mpp.find(more)!=mpp.end()){
            cout << mpp[more] << " , " << i;
            break;
        }
        mpp[a]=i;
    }
}