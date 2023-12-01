#include<iostream>
#include<vector>
using namespace std;

//print n time name

void solve(int n,vector<string>&ans){
	//base case
	if(n==0)
	{
		return;
	}

	ans.push_back("Coding Ninjas");


	solve(n-1,ans);
}

vector<string> printNTimes(int n) {
	// Write your code here.

vector<string>ans;

solve(n,ans);
	return ans;
}