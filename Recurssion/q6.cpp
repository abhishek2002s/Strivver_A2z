#include<bits/stdc++.h>
using namespace std;

//sum of first n number

 void solve(int N) {
    int sum = N * (N + 1) / 2;
    cout<<"The sum of the first "<<N<<" numbers is: "<<sum<<endl;
  }
 int main() {

    solve(5);
    solve(6);
  }
  