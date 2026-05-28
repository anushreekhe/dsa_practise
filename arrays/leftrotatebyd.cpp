#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    int d;
    cin >> d;
    reverse(a.begin(),a.begin()+d);
    
    reverse(a.begin()+d,a.end());
    
    reverse(a.begin(),a.end());
    for(int i=0;i<n;i++) cout << a[i] << " ";
}