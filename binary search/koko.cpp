//leetcode 875
//leetcode33
#include<bits/stdc++.h>
using namespace std;
int minEatingSpeed(vector<int>& piles, int h) {
        int n=*max_element(piles.begin(),piles.end());
        int low=1, high=n, ans;
        while(low<=high){
            int mid=(low+high)/2;
            long long hh=0;
            for(int i=0;i<piles.size();i++){
                hh=hh+ceil((double)piles[i]/mid);
            }
            if(hh>h) low=mid+1;
            else{
                ans=mid;
                high=mid-1;
            }
        }
        return ans;
    }
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
   int h;
   cin >> h;
    cout << minEatingSpeed(v,h);
}