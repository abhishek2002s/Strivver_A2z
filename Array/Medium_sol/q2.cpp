#include <bits/stdc++.h> 
// Sort An Array of 0s, 1s and 2s
void sortArray(vector<int>&nums, int n)
{
    // Write your code here
    //  int n = nums.size();
        int l = 0;
        int m =0;
        int h = n-1;

        while(m<=h)
        {
            if(nums[m]==0)
            {
                swap(nums[l],nums[m]);
                l++;
                m++;
            }
            else if(nums[m]==1)
            {
                m++;
            }
            else{
                swap(nums[m],nums[h]);
                h--;
            }
        }

    

}
