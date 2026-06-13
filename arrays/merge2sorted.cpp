#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> v1(n1);
    vector<int> v2(n2);
    for(int i=0;i<n1;i++) cin >> v1[i];
    for(int i=0;i<n2;i++) cin >> v2[i];
    int a=0;
    int b=0;
    while(a<n1 && b<n2){
        if(v1[a]>v2[b]){
            swap(v1[a],v2[b]);
            a++;
            int b1=b;
            int c=b+1;
            while(v2[b1]>v2[c]){
                swap(v2[b1],v2[c]);
                b1=c;
                c=b1+1;
            }
        }
        else a++;
    }
    for(int i=0;i<n1;i++) cout << v1[i] << " " ;
    cout << endl;
    for(int i=0;i<n2;i++) cout << v2[i] << " " ;
}