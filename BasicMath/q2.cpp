#include<iostream>
using namespace std;

//reverse of a number **
int main() {
	// Write your code here
	int n;
	cin>>n;

	int revnum =0;

	while(n>0){
		int dg = n%10;
		revnum = revnum*10 + dg;
		n = n/10;
	}

	cout<<revnum;
	
}