#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> v[i][j];
        }
    }
    int maxi=0,max_ind=0;
    for(int i=0;i<n;i++){
        int c=v[i].size()-(lower_bound(v[i].begin(),v[i].end(),1)-v[i].begin());
        if(c>maxi){
            maxi=c;
            max_ind=i;
        }
    }
    cout << max_ind;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}