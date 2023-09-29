#include <bits/stdc++.h> 

//largest element in the array
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int max = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max){
            max= arr[i];
        }
    }
    return max;
}