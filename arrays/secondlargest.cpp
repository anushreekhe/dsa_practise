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
    int m=v[0];
    int m2=-1;
    for(int i=1;i<n;i++){
        if(v[i]>m){
            m2=m;
            m=v[i];
        }
        else if(v[i]>m2){
            m2=v[i];
        }
    }
    cout << m2;
}