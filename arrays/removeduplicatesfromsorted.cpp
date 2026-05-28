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
    int i=0;
    int j=1;
    int c = (n > 0) ? 1 : 0;
    while(j<n){
        if(v[i]!=v[j]){
            c++;
            i=j; 
        }
        j++;
    }
    cout << c;
    return 0;
}