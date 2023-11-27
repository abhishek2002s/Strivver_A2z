#include <bits/stdc++.h> 

//count the number of digits ***

int countDigit(long long x) {
    // Write your code here.
    long long count =0;
    while(x>0){
        int digits = x%10;
        count += 1;
        x = x/10;
    }
    return count;
}