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
    for(int i=0;i<n-1;i++){
        int didSwap=0;
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                int temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
                didSwap=1;
            }
        }
        if(didSwap==0) break;
        cout << "runs\n";
    }
    for(int i=0;i<n;i++) cout << v[i] << " ";
}