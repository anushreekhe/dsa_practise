#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int s=0;
    int s2=0;
    for(int i=0;i<n;i++){
        s=s+v[i];
        s2=s2+(v[i]*v[i]);
    }
    int sn=(n*(n+1))/2;
    int sn2=(n*(n+1)*(2*n+1))/6;
    int xmy=s-sn;
    int x2my2=s2-sn2;
    int xpy=x2my2/xmy;
    int x=(xpy+xmy)/2;
    int y=xpy-x;
    cout << x << ", " << y;
}