#include<bits/stdc++.h>
using namespace std;
bool func(vector<int>& arr, int mid, int cows){
    int c=1, last=arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]-last>=mid){
            c++;
            last=arr[i];
        }
    }
    if(c>=cows) return true;
    else return false;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    int cows;
    cin >> cows;
    sort(arr.begin(),arr.end());
    int maxi=*max_element(arr.begin(),arr.end());
    int mini=*min_element(arr.begin(),arr.end());
    int low=1, high=maxi-mini;
    int ans=0;
    while(low<=high){
        int mid=(low+high)/2;
        if (func(arr, mid, cows)){
            ans=mid;
            low=mid+1;
        }
        else high=mid-1;
    }
    cout << ans << endl;
    return 0;
}