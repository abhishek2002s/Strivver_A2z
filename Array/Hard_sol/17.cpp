
#include <bits/stdc++.h>
using namespace std;



int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    int n = arr.size(); // size of the given array.
    map<int,int>mpp;
    int preSum = 0, cnt = 0;

    mpp[0] = 1; // Setting 0 in the map.
    for (int i = 0; i < n; i++) {
        // add current element to prefix Sum:
        preSum += arr[i];

        // Calculate x-k:
        int remove = preSum - k;

        // Add the number of subarrays to be removed:
        cnt += mpp[remove];

        // Update the count of prefix sum
        // in the map.
        mpp[preSum] += 1;
    }
    return cnt;
}

 
int maximumProduct(vector<int> &arr, int n)
{
	// Write your code here
	int pre = 1;
	int suff =1;
	int ans = INT_MIN;


	for(int i=0;i<n;i++){
		if(pre==0) pre =1;
		if(suff==0) suff =1;

		pre = pre*arr[i];
		suff = suff*arr[n-i-1];

		ans = max(ans,max(pre,suff));
	}
	return ans;
}


int main()
{
    vector<int> arr = {3, 1, 2, 4};
    int k = 6;
    int cnt = findAllSubarraysWithGivenSum(arr, k);
     int cnt1 = maximumProduct(arr,arr.size());
    cout << "The number of subarrays is: " << cnt << "\n";
    cout << "The max product of subarrays is: " << cnt1 << "\n";
    return 0;
}
