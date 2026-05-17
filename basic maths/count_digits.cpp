#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n==0){
        cout << 1;
        return 0;
    }
    int c=0;
    while(n!=0){
        c++;
        n/=10;
    }
     cout << c;
     return 0;
}