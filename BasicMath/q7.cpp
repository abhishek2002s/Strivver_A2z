#include<iostream>
using namespace std;
//*****  Greatest common divisor *******
int gcd(int m,int n){
    while(m>0 && n>0){
        if(m>n){
            m = m%n;
        }
        else{
            n = n%m;
        }
    }

    if(m==0) return n;
    return m;
}

int main()
{
    int m , n;
    cin>>m>>n;

    int ans = gcd(m,n);
    cout<<"GCD is"<<" "<<ans;
}