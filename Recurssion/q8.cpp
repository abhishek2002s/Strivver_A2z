#include<bits/stdc++.h>
using namespace std;

//pallindrome function


bool isPalindrome(string& s) {
    // Write your code here.
      int i=0;
        int n = s.length();
        int j = n-1;

while(i<=j)
{
    if(s[i]!=s[j])
    {
        return false;
    }
    i++;
    j--;

}



return true;
    }
