#define pb push_back
#define ll long long
#include<bits/stdc++.h>
using namespace std;
int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int i=0;
        int j=0;
        int cnt=0;
        int odd=0;
        int ans=0;
        while(j<n){
            if(nums[j]%2!=0){cnt=0;odd++;}
            while(i<=j && odd==k){
                cnt++;
                if(nums[i]%2!=0){
                    odd--;
                }
                i++;
            }
            ans+=cnt;
            j++;
        }
        return ans;
    }
int main (){
    int k,x,n;
    cin>>k>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<numberOfSubarrays(nums,k);
}