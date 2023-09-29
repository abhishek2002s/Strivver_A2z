#include<bits/stdc++.h>
//Kadannes algorithm
long long maxSubarraySum(vector<int> nums, int n)
{

long long ans =0;
long long sum =0;

for(int i=0;i<n;i++){
    sum += nums[i];
    ans = max(sum,ans);
    if(sum<0){
        sum =0;
    }
}
return ans;
}