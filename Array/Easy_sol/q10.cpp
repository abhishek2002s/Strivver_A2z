//missing number+++++++++++

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int totalsum =0;
        for(int i=0;i<nums.size();i++)
        {
            totalsum+=nums[i];
        }
        int indexsum =0;
        for(int i=1;i<=nums.size();i++)
        {
            indexsum+=i;
        }

        return indexsum - totalsum; 
    }
};