#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;

 

    //precompute
    // int hash[26] ={0}; //for small and caps char
     int hash[256] ={0}; //for all charchter
    for(int i=0;i<s.size();i++)
    {
        // hash[s[i]-'a'] += 1; //for small char
        // hash[s[i]-'A'] += 1; //for caps char
        hash[s[i]] += 1;
    }

    int q;
    cin>>q;
    while(q--)
    {
        char c;
        cin>>c;

        //fetch
        // cout<<hash[c-'a']<<endl;
        cout<<hash[c]<<endl;
    }

    return 0;
}