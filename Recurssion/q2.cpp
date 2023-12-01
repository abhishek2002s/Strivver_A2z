#include<iostream>
#include<vector>
using namespace std;

//print 1 t0 n;

void solve(int x,vector<int>&ans,int i){
//base case
if(x<i)
{
    return;
}

ans.push_back(i);


solve(x,ans,i+1);

}

vector<int> printNos(int x) {
    // Write Your Code Here
   vector<int>ans;
   int i;
solve(x,ans,1);
return ans;
}