#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> v1(n1);
    vector<int> v2(n2);
    for(int i=0;i<n1;i++) cin >> v1[i];
    for(int i=0;i<n2;i++) cin >> v2[i];
    int a=n1-1;
    int b=0;
    while(true){
        if(v1[a]>v2[b]){
            swap(v1[a],v2[b]);
            a--;
            b++;
        }
        else break;
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for(int i=0;i<n1;i++) cout << v1[i] << " " ;
    cout << endl;
    for(int i=0;i<n2;i++) cout << v2[i] << " " ;
}