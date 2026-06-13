#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    sort(v.begin(), v.end());
    for(int i=0;i<n;i++){
        if(i>0 && v[i]==v[i-1]) continue;
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=v[i]+v[j]+v[k];
            if(sum<0) j++;
            else if(sum>0) k--;
            else{
                cout << v[i] << ", " << v[j] << ", " << v[k] << endl;
                j++;
                k--;
                while(j<k && v[j]==v[j-1]) j++;
                while(j<k && v[k]==v[k+1]) k--;
            }
        }
    }
}