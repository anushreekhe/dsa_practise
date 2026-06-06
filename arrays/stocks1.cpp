#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
   int mini=v[0], profit=0;
   for(int i=1;i<n;i++){
    int cost=v[i]-mini;
    profit=max(profit,cost);
    mini=min(mini,v[i]);
   }
   cout << profit;
}