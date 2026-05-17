#include<bits/stdc++.h>
using namespace std;
string func(int l, int r, const string &s){
    if(l>=r) return "yes";
    if(s[l]!=s[r]) return "no";
    return func(l+1, r-1, s);

}
int main(){
    string s;
    cin >> s;
    string res = func(0, (int)s.size()-1, s);
    cout << res << "\n";
    return 0;
}
