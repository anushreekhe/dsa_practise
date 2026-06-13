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
        for(int j=i+1;j<n;j++){
            if(j>i+1 && v[j]==v[j-1]) continue;
        int k=j+1;
        int l=n-1;
        while(k<l){
            int sum=v[i]+v[j]+v[k]+v[l];
            if(sum<0) k++;
            else if(sum>0) l--;
            else{
                cout << v[i] << ", " << v[j] << ", " << v[k] << ", " << v[l] << endl;
                k++;
                l--;
                while(k<l && v[k]==v[k-1]) k++;
                while(k<l && v[l]==v[l+1]) l--;
            }
        }
    }
}
}