//print element at nth row and cth position
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
int c;
cin >> n;
cin >> c;
// formula (n-1)C(c-1)
int ans=1;
for(int i=0;i<c;i++){
    ans=ans*(n-i);
    ans=ans/(i+1);
}
cout << ans;
}