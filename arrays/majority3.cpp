#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int c1=0,c2=0,el1,el2;
    for(int i=0;i<n;i++){
        if(c1==0 && v[i]!=el2){
            el1=v[i];
            c1++;
        }
        else if(c2==0 && v[i]!=el1){
            el2=v[i];
            c2++;
        }
        else if(el1==v[i]) c1++;
        else if(el2==v[i]) c2++;
        else{
            c1--;
            c2--;
        }
    }
    int c11=0,c22=0;
    for(int i=0;i<n;i++){
        if(v[i]==el1) c11++;
        else if(v[i]==el2) c22++;
    }
    int mini=n/3+1;
    if(c11>=mini) cout << el1 << " ";
    if(c22>=mini) cout << el2;
}