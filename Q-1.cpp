#define pb push_back
#include<bits/stdc++.h>
using namespace std;
int numOfSubarrays(vector<int>&arr,int k,int x){
        int n = arr.size();
        int cnt=0;
        int prevsum = 0;
        for(int i=0;i<k;i++){
            prevsum+=arr[i];
        }
        if((prevsum/k)>=x)cnt++;
        int i=1;
        int j=k;
        while(j<n){
            int currsum = prevsum + arr[j] - arr[i-1];
            if((currsum/k)>=x){
                cnt++;
            }
            prevsum = currsum;
            i++;
            j++;
        }
        return cnt;
    }
int main (){
    int k,x,n;
    cin>>k>>x>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<numOfSubarrays(arr,k,x);
}
