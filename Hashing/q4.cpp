#include <bits/stdc++.h>
using namespace std;
vector<int> countFrequency(int n, int x, vector<int> &nums){
    // Write your code here.
      // Create a vector 'ans' of size n initialized with zeros to store the frequencies.
    vector<int> ans(n, 0);

    // Traverse the input array 'nums'.
    for (int num : nums)
    {
        // Check if the element 'num' is within the range of 1 to n.
        if (num <= n)
        {
            // Increment the frequency of 'num' in 'ans'.
            ans[num - 1]++;
        }
    }

    // Return the vector 'ans' containing the frequencies.
    return ans;
    

}