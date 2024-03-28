#define pb push_back
#define ll long long
#include<bits/stdc++.h>
using namespace std;
long long countSubarrays(vector<int>& nums, long long k) {
    int n = nums.size();
        ll sum = 0;
        ll score = 0;
        ll ans = 0;
        ll i = 0;
        ll j = 0;
        while(j<n && i<n){
            sum += nums[j];
            score = sum*(j-i+1);
            while(i<=j and score>=k){
                sum -= nums[i];
                i++;
                score = sum*(j-i+1);
            }
            ans += (j-i+1);
            j++;
            }
        return ans;
}
int main (){
    ll k,x,n;
    cin>>k>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<countSubarrays(nums,k);
}