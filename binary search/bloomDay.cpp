//leetcode 875
//leetcode33
#include<bits/stdc++.h>
using namespace std;
bool possible(vector<int>& bloomDay, int mid, int m, int k){
        int c=0;
        int no=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid) c++;
            else{
                no+=c/k;
                c=0;
            }
        }
        no+=c/k;
        return no>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long x=m*1LL*k*1LL;
        if(x>bloomDay.size()) return -1;
        int mini=*min_element(bloomDay.begin(),bloomDay.end());
        int maxi=*max_element(bloomDay.begin(),bloomDay.end());
        int low=mini, high=maxi;
        while(low<=high){
            int mid=(low+high)/2;
            if (possible(bloomDay,mid,m,k)){
                high=mid-1;
            }
            else low=mid+1;
        }
        return low;
    }
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
   int m,k;
   cin >> m >> k;
    cout << minDays(v,m,k);
}