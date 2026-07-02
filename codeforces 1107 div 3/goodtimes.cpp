#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        long long x;
        cin >> x;
        int k=0;
        while(x!=0){
            k++;
            x/=10;
        }
        long long ans = 1;
        for(int j=0;j<k;j++) ans *= 10;
        ans += 1;
        cout << ans << endl;
    }
}