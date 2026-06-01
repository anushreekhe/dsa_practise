#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int c=0;
    int el=0;
    for(int i=0;i<n;i++){
        if(c==0) el=v[i];
        if (v[i]==el) c++;
        else c--;
    }
    cout << el;
}