#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> v[i][j];
        }
    }
    int top=0, left=0, right=n-1, bottom=n-1;
    while(top<=bottom && left<=right){
        //left to right
        for(int i=left; i<=right; i++){
            cout << v[top][i] << " ";
        }
        top++;
        //top to bottom
        for(int i=top; i<=bottom; i++){
            cout << v[i][right] << " ";
        }
        right--;
        //right to left
        for(int i=right; i>=left;i--){
            cout << v[bottom][i] << " ";
        }
        bottom--;
        //bottom to top
        for(int i=bottom;i>=top;i--){
            cout << v[i][left] << " ";
        }
        left++;
    }
}