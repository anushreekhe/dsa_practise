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
    if(v[0]<=v2[0]) u.push_back(v[0]);
    else u.push_back(v2[0]);
    int i=0;
    int j=0;
    int x=1;
    while(i<n && j<n2){
        if(v[i]<=v2[j]){
            if(u[x-1]!=v[i]){
                u.push_back(v[i]);
                x++;
            }
            i++;
        }
        else if(v2[j]<v[i]){
            if(u[x-1]!=v2[j]){
                u.push_back(v2[j]);
                x++;
            }
            j++;
        }
    }
    x=u.size();
    while(i<n){
        if(u[x-1]!=v[i]) 
        {u.push_back(v[i]);
         x++;
        }
            i++;
    }
    while(j<n2){
        if(u[x-1]!=v2[j]){
             u.push_back(v2[j]);
            x++;
        }
         j++;
    }
    for(int i2=0;i2<u.size();i2++) cout << u[i2] << " ";
}