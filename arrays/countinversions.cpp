#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void merge(vector<int> &v, int low, int mid, int high){
    int left=low;
    int right=mid+1;
    vector<int> temp;
    while(left<=mid && right<=high){
        if(v[left]<=v[right]){
            temp.push_back(v[left]);
            left++;
        }
        else{
            cnt += mid - left + 1;
            temp.push_back(v[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(v[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(v[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        v[i]=temp[i-low];
    }
}
void mergeSort(vector<int> &v, int low, int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    mergeSort(v,low,mid);
    mergeSort(v,mid+1,high);
    merge(v,low,mid,high);
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
    mergeSort(v,0,n-1);
    cout << cnt;
}