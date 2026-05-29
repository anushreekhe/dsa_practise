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
    int n2;
    cin >> n2;
    vector<int> v2;
    for(int i=0;i<n2;i++){
        int x;
        cin >> x;
        v2.push_back(x);
    }
    vector<int> u;
    int i=0;
    int j=0;
    while(i<n && j<n2){
        if(v[i]==v2[j]){
            u.push_back(v[i]);
            i++;
            j++;
        }
        else if(v[i]<v2[j]) i++;
        else j++;
    }
    for(int i2=0;i2<u.size();i2++) cout << u[i2] << " ";
}