#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int, int> hash;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        hash[num]++;
    }
    for(auto it : hash){
        cout << it.first << " - " << it.second << endl;
    }
    cout << "enter no to search"<< endl;
    int s;
    cin >> s;
    cout << hash[s];
}