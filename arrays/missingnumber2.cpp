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
int x1=0;

int x2=0;
for(int i=0;i<n;i++){
    x1=x1^(i+1);
    x2=x2^v[i];
}
x1=x1^num;
cout << (x1^x2);
}