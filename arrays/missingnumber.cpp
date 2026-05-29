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
int num;
cin >> num;
int sum=(num*(num+1))/2;
for(int i=0;i<n;i++){
    sum=sum-v[i];
    //cout << sum;
}
cout << sum;
}