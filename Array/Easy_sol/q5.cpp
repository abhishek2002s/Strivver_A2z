#include <bits/stdc++.h> 

//left rotate array by one
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
   int temp = arr[0]; // storing the first element of array in a variable
  for (int i = 0; i < n - 1; i++) {
    arr[i] = arr[i + 1];
  }
  arr[n - 1] = temp;

  return arr;
}