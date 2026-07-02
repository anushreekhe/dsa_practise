#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i <n; i++){
        int ss;
        cin >> ss;
        string s;
        cin >> s;
        int x=1;
        for(int i=1;i<ss;i++){
            if(s[i]!=s[i-1]) x++;
        }
        if(x==1 || x==2) cout << x << endl;
        else cout << 1 << endl;
    }
}