#include<bits/stdc++.h>
using namespace std;

int partitionn(vector<int> &v, int low, int high){
    int pivot = v[low];
    int i=low;
    int j=high;
    while(i<j){
        while(v[i]<=pivot && i<=high){
            i++;
        }
        while(v[j]>pivot && j>low){
            j--;
        }
        if(i<j) swap(v[i],v[j]);
    }
    swap(v[j],v[low]);
    return j;
}
void quick_sort(vector<int> &v, int low, int high){
    if(low<high){
        int part = partitionn(v,low,high);
        quick_sort(v,low,part-1);
        quick_sort(v,part+1,high);
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    quick_sort(v,0,n-1);
    for(int i=0;i<n;i++){
        cout << v[i] << " ";
    }
}