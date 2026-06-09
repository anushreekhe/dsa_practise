#include<bits/stdc++.h>
using namespace std;
    void setZeroes(vector<vector<int>>& matrix) {
        if(matrix.empty()) return;
        int m=matrix[0].size();
        int n=matrix.size();
        vector<int> col(m, 0);
        vector<int> row(n, 0);
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if (matrix[i][j]==0){
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(row[i] || col[j]){
                    matrix[i][j]=0;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
        return;
    }
    int main(){
        int n;
        int m;
        cin >> n;
        cin >> m;
        vector<vector<int>> matrix(n, vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> matrix[i][j];
            }
        }
        setZeroes(matrix);
    }
