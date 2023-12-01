#include<iostream>
#include<vector>
using namespace std;

//print n to 1

void solve(int x,vector<int>&ans,int i){
//base case
if(x<i)
{
    return;
}

ans.push_back(x);


solve(x-1,ans,i);

}


vector<int> printNos(int x) {
    // Write Your Code Here
      vector<int>ans;
   int i;
solve(x,ans,1);
return ans;
}