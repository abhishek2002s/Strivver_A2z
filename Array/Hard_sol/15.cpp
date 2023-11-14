#include<bits/stdc++.h>
using namespace std;

//Wildcard Matching *************

class Solution {
public:
bool isChecker(string&s,int si,string&p,int pi){
    //base case
    if(si == s.size() && pi == p.size()){
        return true;
    }

    if(si == s.size() && pi < p.size()){
        while(pi<p.size()){
            if(p[pi] != '*') return false;
            pi++;
        }
        return true;
    }

    //single char match
    if(s[si] == p[pi]  || '?' == p[pi]){
        return isChecker(s,si+1,p,pi+1);
    }

    if(p[pi] == '*'){

        //treat '*' as a empty or null

      bool caseA =  isChecker(s,si,p,pi+1);

      //treat '* as one consume character
      bool caseB = isChecker(s,si+1,p,pi);

      return caseA || caseB;
    }

    //charcter doesnt macth
    return false;
}
    bool isMatch(string s, string p) {
        int si =0;
        int pi=0;

        return isChecker(s,si,p,pi);
    }
};