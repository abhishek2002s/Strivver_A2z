#include <bits/stdc++.h>
using namespace std;

int maxDepth(string s) {
	// Write your code here.
	int n =s.size();
        vector<int>ans;
      int count = 0;
      int j= 0;

      for(int i=0;i<n;i++){
        if(s[i]=='('){
            if(count == 0){
                count++;
            }
            else{
                count++;
                ans.push_back(s[i]);
            }
        }
        else{
            if(count ==1){
                count--;
            }
            else{
                count--;
                ans.push_back(s[i]);
            }
        }
      }
      return ans;
}
