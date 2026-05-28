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
    
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && v[j-1]>v[j]){
            swap(v[j-1],v[j]);
            j--;
        }
    }

    for(int i=0;i<n;i++) cout << v[i] << " ";
}