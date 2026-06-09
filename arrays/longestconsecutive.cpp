#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int longest = 1;
    unordered_set<int> st;
    for(int i=0;i<n;i++) st.insert(v[i]);
    for(auto it : st){
        if(st.find(it-1)==st.end()){
            int c=1;
            int x=it;
            while(st.find(x+1)!=st.end()){
                x=x+1;
                c=c+1;
            }
            longest=max(longest,c);
        }
    }
    cout << longest;
}