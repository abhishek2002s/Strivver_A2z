#include<iostream>
using namespace std;
//check pallindrome **
bool palindrome(int n)
{
    // Write your code here
    int revnum =0;
    int dup = n;

    while(n>0){
        int dg = n%10;
        revnum = revnum *10 + dg;
        n = n/10;
    }
    if(revnum == dup){
        return true;
    }
    else{
        return false;
    }
}