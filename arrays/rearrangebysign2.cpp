#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    vector<int> pos;
    vector<int> neg;
    for(int i=0;i<n;i++){
        if(v[i]>=0) pos.push_back(v[i]);
        else neg.push_back(v[i]);
    }
    int s;
    if(pos.size()<=neg.size()) s=pos.size();
    else s=neg.size();
    for(int i=0;i<s;i++){
        v[2*i]=pos[i];
        v[2*i+1]=neg[i];
    }
    int index=s*2;
    if(pos.size()<neg.size()){
        for(int i=s;i<neg.size();i++){
            v[index++]=neg[i];
        }
    }
    if(neg.size()<pos.size()){
        for(int i=s;i<pos.size();i++){
            v[index++]=pos[i];
        }
    }
    for(int i=0;i<n;i++) cout << v[i] << " ";
}