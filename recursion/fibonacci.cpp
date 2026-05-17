#include<bits/stdc++.h>
using namespace std;
void func(int a, int b, int n){
    if(n==0 || n==1){
        cout << a << " ";
        return;
    }
    cout << a << " ";
    func(b, a+b, n-1);  
}
int main(){
    int n;
    cin >> n;
    func(0,1,n);
    return 0;
}