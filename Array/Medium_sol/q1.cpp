#include <bits/stdc++.h>
//Two sum
string read(int n, vector<int> book, int target)
{
sort(book.begin(),book.end());
int l = 0;
int r =book.size()-1;

while(l<r)
{
    if(book[l]+book[r]==target)
    {
        return "YES";
    } else if (book[l] + book[r] < target) {
        l++;
    }
     else
     {
         r--;
     }
}
return "NO";
}